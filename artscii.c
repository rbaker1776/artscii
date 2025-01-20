#include <stdio.h>
#include <stdlib.h>
#include "artscii.h"
#include "ascii.h"


#define KERNEL_SZ 3

static const double kernel[KERNEL_SZ][KERNEL_SZ] = {
    { 3.0 / 64, 8.0 / 64,  3.0 / 64, },
    { 8.0 / 64, 20.0 / 64, 8.0 / 64, },
    { 3.0 / 64, 8.0 / 64,  3.0 / 64, },
};

uint32_t** read_img(const char* filepath) {
    // Read in the BMP Image
    FILE* fptr = fopen(filepath, "rb");
    BMPImage bmp_img;
    fread(&(bmp_img.header), sizeof(BMPHeader), 1, fptr);
    bmp_img.data = malloc(bmp_img.header.image_size_bytes);
    fseek(fptr, 0, SEEK_SET);
    fread(&(bmp_img), sizeof(BMPImage), 1, fptr);
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
    return img;
}

void process_img(const uint32_t** img, int img_width, int img_height)
{
    for (int y = 0; y < img_height; y += 8)
    {
        for (int x = 8; x < img_width; x += 8)
        {
            uint32_t img_sec[8][8];
            for (int i = 0; i < 8; ++i) for (int j = 0; j < 8; ++j)
                img_sec[i][j] = img[x + i][y + j];

            double best_score = 1;
            char best_match = '\0';
            for (int c = 0; c < 95; ++c)
            {
                const double score = cmp_img((const uint32_t**)img_sec, (const uint32_t**)char_matrices[c]);
                if (score < best_score)
                {
                    best_score = score;
                    best_match = 32 + c;
                }
            }

            printf("%c", best_match); 
        }
        printf("\n");
    }
}

Color get_dominant_color(const uint32_t** img_sec);

void print_char(const char c, Color color);

static double pixel_delta(uint32_t a, uint32_t b)
{
    int32_t delta = (int32_t)a - (int32_t)b;
    delta = (delta < 0 ? -delta : delta);
    return (double)delta / 256;
}

double cmp_img(const uint32_t** img1, const uint32_t** img2)
{
    double img_delta = 0;

    for (int x = 0; x < 8; ++x) for (int y = 0; y < 8; ++y)
    {
        // kernel is centered at (x, y)
        double delta = 0;
        int counted_pixels = 0;

        for (int dx = -1; dx <= 1; ++dx) for (int dy = -1; dy <= 1; ++dy)
        {
            // if out of bounds then continue
            if ((x + dx < 0) || (x + dx > 7) || (y + dy < 0) || (y + dy > 7))
                continue;

            // else increment counted_pixels
            ++counted_pixels;
            delta += kernel[1 + dx][1 + dy] * pixel_delta(img1[x + dx][y + dy], img2[x + dx][y + dy]);
        }

        delta *= (double)(KERNEL_SZ * KERNEL_SZ) / counted_pixels;
        img_delta += delta;
    }

    return img_delta / 64;
}


int main()
{
    printf("start");
    uint32_t** img = read_img("./images/car.bmp");
    printf("start");
    return 0;
}
