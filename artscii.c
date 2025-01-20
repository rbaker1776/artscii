#include <stdio.h>
#include <stdlib.h>
#include "artscii.h"


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

void process_img(const uint32_t** img);

Color get_dominant_color(const uint32_t** img_sec);

void print_char(const char c, Color color);

static double pixel_delta(uint32_t a, uint32_t b)
{
    double 
}

double cmp_img(const uint32_t** img1, const uint32_t** img2)
{
    double img_delta = 0;

    for (int x = 0; x < 8; ++x) for (int y = 0; y < 8; ++y)
    {
        // kernel is centered at (x, y)
        double delta = 0;
        int counted_pixels = 0;

        for (int i = -1; i <= 1; ++i) for (int j = -1; j <= 1; ++j)
        {
            // if out of bounds then continue
            if ((x + i < 0) || (x + i > 7) || (y - j < 0) || (y + j > 7))
                continue;

            // else increment counted_pixels
            ++counted_pixels;

        }
    }

    return img_delta;
}


int main()
{
    printf("\x1b[30mHello!\x1b[0m\n");
    printf("\x1b[31mHello!\x1b[0m\n");
    printf("\x1b[32mHello!\x1b[0m\n");
    printf("\x1b[33mHello!\x1b[0m\n");
    printf("\x1b[34mHello!\x1b[0m\n");
    printf("\x1b[35mHello!\x1b[0m\n");
    printf("\x1b[36mHello!\x1b[0m\n");
    printf("\x1b[37mHello!\x1b[0m\n");

    printf("\x1b[40mHello!\x1b[0m\n");
    printf("\x1b[41mHello!\x1b[0m\n");
    printf("\x1b[42mHello!\x1b[0m\n");
    printf("\x1b[43mHello!\x1b[0m\n");
    printf("\x1b[44mHello!\x1b[0m\n");
    printf("\x1b[45mHello!\x1b[0m\n");
    printf("\x1b[46mHello!\x1b[0m\n");
    printf("\x1b[47mHello!\x1b[0m\n");

    printf("\x1b[90mHello!\x1b[0m\n");
    printf("\x1b[91mHello!\x1b[0m\n");
    printf("\x1b[92mHello!\x1b[0m\n");
    printf("\x1b[93mHello!\x1b[0m\n");
    printf("\x1b[94mHello!\x1b[0m\n");
    printf("\x1b[95mHello!\x1b[0m\n");
    printf("\x1b[96mHello!\x1b[0m\n");
    printf("\x1b[97mHello!\x1b[0m\n");

    printf("\x1b[100mHello!\x1b[0m\n");
    printf("\x1b[101mHello!\x1b[0m\n");
    printf("\x1b[102mHello!\x1b[0m\n");
    printf("\x1b[103mHello!\x1b[0m\n");
    printf("\x1b[104mHello!\x1b[0m\n");
    printf("\x1b[105mHello!\x1b[0m\n");
    printf("\x1b[106mHello!\x1b[0m\n");
    printf("\x1b[107mHello!\x1b[0m\n");
}
