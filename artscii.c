#include "artscii.h"
#include "ascii.h"


Image read_img(const char* filepath) {
    // Read in the BMP Image
    FILE* fptr = fopen(filepath, "rb");
    BMPImage bmp_img;
    fread(&(bmp_img.header), sizeof(BMPHeader), 1, fptr);
    bmp_img.data = malloc(bmp_img.header.image_size_bytes);
    fseek(fptr, 54, SEEK_SET);
    fread(bmp_img.data, bmp_img.header.image_size_bytes, 1, fptr);
    fclose(fptr);

    // Allocate space for image
    int cols = bmp_img.header.width_px, rows = bmp_img.header.height_px;
    uint32_t** img = malloc(sizeof *img * rows);
    for (int i = 0; i < rows; i++) 
        img[i] = calloc(cols, sizeof *(img[i]));
    
    // Read in the image
    uint8_t* data = bmp_img.data;
    for (int j = rows-1; j >= 0; j--) {
        int num_bytes_read = 0;
        
        for (int i = 0; i < cols; i++) {
            img[j][i] = *(data++);
            img[j][i] |= *(data++) << 8;
            img[j][i] |= *(data++) << 16;
            num_bytes_read += 3;
        }

        while (num_bytes_read % 4)
            data++, num_bytes_read++;        
    }

    free(bmp_img.data);
    return (Image) { .cols=cols, .rows=rows, .img=img };
}


Image free_img(Image img) {
    for (int i = 0; i < img.rows; i++) 
        free(img.img[i]);
    
    free(img.img);
    return (Image) { .rows=0, .cols=0, .img=NULL };
}


void process_img(const uint32_t** img, int img_width, int img_height) {
    for (int x = 0; x <= img_width - 8; x += 8) {
        for (int y = 0; y <= img_height - 8; y += 8) {
            uint32_t img_sec[8][8];
            for (int i = 0; i < 8; ++i) for (int j = 0; j < 8; ++j)
                img_sec[i][j] = img[x + i][y + j];

            int best_c = 0;
            double best_score = 1;
            char best_match = '\0';
            
            for (int c = 0; c < 95; ++c) {
                const double score = cmp_sector(img_sec, char_matrices[c]);
                
                if (score < best_score) {
                    best_score = score;
                    best_match = 32 + c;
                    best_c = c;
                }
            }

            best_c = (best_c == 0 ? ('M' - 32) : best_c);
            best_match = (best_match == ' ' ? 'M' : best_match);
            const Color color = get_dominant_color(img_sec, char_matrices[best_c]);
            //printf("(%d, %d, %d)\n", color.red, color.green, color.blue);
            print_char(best_match, color);
            print_char(best_match, color);
        }

        printf("\n");
    }
}


// Need to improve - consider using clustering or something else
Color get_dominant_color(const uint32_t img[8][8], const uint32_t match[8][8]) {
    int red = 0, green = 0, blue = 0;
    int ct = 0;

    for (int i = 0; i < 8; i++) for (int j = 0; j < 8; j++) {
        if (match[i][j]) {
            red   += (img[i][j] >> 16) & ((1 << 8) - 1);
            green += (img[i][j] >> 8)  & ((1 << 8) - 1);
            blue  += (img[i][j])       & ((1 << 8) - 1);
            ct++;
        }
    }

    ct = ct == 0 ? 1 : ct;
    return (Color) { .red = red / ct, .green = green / ct, .blue = blue / ct };
}


void print_char(const char c, Color color) {
    printf("\033[38;2;%d;%d;%dm%c\e[0m", color.red, color.green, color.blue, c);
}


static double pixel_delta(uint32_t a, uint32_t b) {
    double delta = (double)a - b;
    delta = (delta < 0 ? -delta : delta);
    return delta / 256;
}


// static uint32_t grayify(uint32_t pixel) {
//     uint32_t b = ((1u << 8) - 1) & pixel;
//     uint32_t g = ((1u << 8) - 1) & (pixel >> 8);
//     uint32_t r = ((1u << 8) - 1) & (pixel >> 16);
//     return (uint32_t)(0.3333 * r + 0.3333 * g + 0.3333 * b);
// }


double cmp_sector(const uint32_t img1[8][8], const uint32_t img2[8][8]) {
    double img_delta = 0;

    for (int x = 0; x < 8; ++x) for (int y = 0; y < 8; ++y) {
        // kernel is centered at (x, y)
        double delta = 0;
        int counted_pixels = 0;

        for (int dx = -1; dx <= 1; ++dx) for (int dy = -1; dy <= 1; ++dy) {
            // if out of bounds then continue
            if ((x + dx < 0) || (x + dx > 7) || (y + dy < 0) || (y + dy > 7))
                continue;

            // else increment counted_pixels
            ++counted_pixels;
            double min_pixel_delta = DBL_MAX;
            for (int i = 0; i <= 16; i += 8) {
                double res = pixel_delta((img1[x+dx][y+dy] >> i) & ((1<<8)-1), img2[x+dx][y+dy]);
                min_pixel_delta = min_pixel_delta > res ? res : min_pixel_delta;
            }
            delta += kernel[1 + dx][1 + dy] * min_pixel_delta; //pixel_delta(grayify(img1[x + dx][y + dy]), img2[x + dx][y + dy]);
        }

        delta *= (double)(KERNEL_SZ * KERNEL_SZ) / counted_pixels;
        img_delta += delta;
    }

    return img_delta / 64;
}


int main(int argc, char** argv)
{
    if (argc < 2) {
        printf("Format: ./show <filepath>.bmp");
        return EXIT_FAILURE;
    }
    
    Image img = read_img(argv[1]);
    process_img((const uint32_t**) img.img, img.rows, img.cols);
    img = free_img(img);

    return 0;
}
