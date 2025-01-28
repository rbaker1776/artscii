#include "artscii.h"
#include "ascii.h"

/*
Read in a BMP image and store it in an Image object
following the BMP standard
*/
Image read_img(const char *filepath)
{
    // Read in the BMP Image
    FILE *fptr = fopen(filepath, "rb");
    BMPImage bmp_img;
    fread(&(bmp_img.header), sizeof(BMPHeader), 1, fptr);
    bmp_img.data = malloc(bmp_img.header.image_size_bytes);
    fseek(fptr, 14 + bmp_img.header.dib_header_size, SEEK_SET);
    fread(bmp_img.data, bmp_img.header.image_size_bytes, 1, fptr);
    fclose(fptr);

    // Allocate space for image
    int cols = bmp_img.header.width_px, rows = bmp_img.header.height_px;
    uint32_t **img = malloc(sizeof *img * rows);
    for (int i = 0; i < rows; i++)
        img[i] = calloc(cols, sizeof *(img[i]));

    // Read in the image
    uint8_t *data = bmp_img.data;
    for (int j = rows - 1; j >= 0; j--)
    {
        int num_bytes_read = 0;

        for (int i = 0; i < cols; i++)
        {
            img[j][i] |= *(data++);       // Store blue in last byte
            img[j][i] |= *(data++) << 8;  // Store green in second to last byte
            img[j][i] |= *(data++) << 16; // Store red in third to last byte
            num_bytes_read += 3;
        }

        while (num_bytes_read % 4)
            data++, num_bytes_read++; // Padding
    }

    free(bmp_img.data);
    return (Image){.cols = cols, .rows = rows, .img = img};
}

/*
Free the given Image object to avoid memory leaks
*/
Image free_img(Image img)
{
    for (int i = 0; i < img.rows; i++)
        free(img.img[i]);

    free(img.img);
    return (Image){.rows = 0, .cols = 0, .img = NULL};
}

/*
"Main" function that takes an Image object, detects
the closest ASCII character that matches each 8x8
segment of the image and prints it out to the screen
in the dominant color of that segment
*/
void process_img(const Image image)
{
    const uint32_t **img = (const uint32_t **)image.img;
    int img_height = image.cols, img_width = image.rows;

    for (int x = 0; x <= img_width - 8; x += 8)
    {
        for (int y = 0; y <= img_height - 8; y += 8)
        {
            // Extract 8x8 segment
            uint32_t img_sec[8][8];
            for (int i = 0; i < 8; ++i)
                for (int j = 0; j < 8; ++j)
                    img_sec[i][j] = img[x + i][y + j];

            // Find best ASCII character match
            int best_c = 0;
            double best_score = 1;
            char best_match = '\0';

            for (int c = 0; c < 95; ++c)
            {
                const double score = cmp_sector(img_sec, char_matrices[c]);

                if (score < best_score)
                {
                    best_score = score;
                    best_match = 32 + c;
                    best_c = c;
                }
            }

            best_c = (best_c == 0 ? ('M' - 32) : best_c);
            best_match = (best_match == ' ' ? 'M' : best_match);
            display(img_sec, char_matrices[best_c], best_match);
        }

        printf("\n");
    }
}

/*
Print the character c to the screen in the given color
*/
static void print_char(const char c, uint32_t color)
{
    printf("\033[38;2;%d;%d;%dm%c\e[0m", RED(color), GREEN(color), BLUE(color), c);
}

/*
Finds the dominant color of the given 8x8 segment
and prints the best matching ASCII character to the
screen in that color
*/
void display(const uint32_t img[8][8], const uint32_t match[8][8], char best_match)
{
    const int compress_shift = 2;

    /*
    Printed characters are of size 8x4, while the segments are of size 8x8
    Therefore, 2 characters need to be printed for each segment
    In order to capture any color differences between the left and right halves
    of the 8x8 segment, the dominant color calculation algorithm is run twice
    */
    for (size_t mul = 0; mul < 2; mul++)
    {
        uint32_t color;
        Vector vec = (Vector){.curr = 0, .m_idx = 0};

        for (size_t j = 4 * mul; j < 4 * (mul + 1); j++)
        {
            for (size_t i = 0; i < 8; i++)
            {
                // Compress RGB values
                color = 0;
                color |= (RED(img[i][j]) >> compress_shift) << 16;
                color |= (GREEN(img[i][j]) >> compress_shift) << 8;
                color |= (BLUE(img[i][j]) >> compress_shift);
                add_color(&vec, color);
            }
        }

        color = get_dom_color(&vec);

        // Uncompress RGB values
        uint32_t print_color = 0;
        print_color |= RED(color) << (compress_shift + 16);
        print_color |= GREEN(color) << (compress_shift + 8);
        print_color |= BLUE(color) << (compress_shift);
        print_char(best_match, print_color);
    }
}

/*
Helper function to find the difference in
brightness values of the given pixels
*/
static double pixel_delta(uint32_t a, uint32_t b)
{
    double delta = (double)a - b;
    delta = (delta < 0 ? -delta : delta);
    return delta / 256;
}

/*
Checks the similarity between the given images using convolutions
img1 - 8x8 segment for which we want to find the closest ASCII character
img2 - ASCII character to check against

Using the kernel defined in artscii.h, a convolution is carried out
1. The RGB pixel values of img1 are subtracted from img2 separately
2. The smallest difference is selected (We only care about the brightness
   of the pixel, not the color)
3. The difference is multiplied with the weight corresponding to that cell
   in the kernel
4. The product is added to a running sum (delta) for the current kernel position
5. The sums from all kernel positions are added together to obtain the img_delta

The ASCII character yielding the minimum img_delta is the closest match to the image
*/
double cmp_sector(const uint32_t img1[8][8], const uint32_t img2[8][8])
{
    double img_delta = 0;

    for (int x = 0; x < 8; ++x)
        for (int y = 0; y < 8; ++y)
        {
            // kernel is centered at (x, y)
            double delta = 0;
            int counted_pixels = 0;

            for (int dx = -1; dx <= 1; ++dx)
                for (int dy = -1; dy <= 1; ++dy)
                {
                    // continue if out of bounds
                    if ((x + dx < 0) || (x + dx > 7) || (y + dy < 0) || (y + dy > 7))
                        continue;

                    // otherwise, increment counted_pixels
                    ++counted_pixels;
                    double min_pixel_delta = DBL_MAX;
                    for (int i = 0; i <= 16; i += 8)
                    {
                        double res = pixel_delta((img1[x + dx][y + dy] >> i) & ((1 << 8) - 1), img2[x + dx][y + dy]);
                        min_pixel_delta = min_pixel_delta > res ? res : min_pixel_delta; // Minimize pixel delta
                    }

                    delta += kernel[1 + dx][1 + dy] * min_pixel_delta; // Running sum for current kernel position
                }

            delta *= (double)(KERNEL_SZ * KERNEL_SZ) / counted_pixels; // Scale delta to equally favor image corners
            img_delta += delta;
        }

    return img_delta / 64;
}
