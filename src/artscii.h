#ifndef ARTSCII_H_55FF061DA2AB9BB3
#define ARTSCII_H_55FF061DA2AB9BB3

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <float.h>
#include <stdbool.h>
#include <assert.h>

#pragma pack(push, 1)
/*
Struct to store the header
information in a BMP image
*/
typedef struct
{                              // Total: 54 bytes
    uint16_t type;             // Magic identifier: 0x4d42
    uint32_t size;             // File size in bytes
    uint16_t reserved1;        // Not used
    uint16_t reserved2;        // Not used
    uint32_t offset;           // Offset to image data in bytes from beginning of file (54 bytes)
    uint32_t dib_header_size;  // DIB Header size in bytes (40 bytes)
    int32_t width_px;          // Width of the image
    int32_t height_px;         // Height of image
    uint16_t num_planes;       // Number of color planes
    uint16_t bits_per_pixel;   // Bits per pixel
    uint32_t compression;      // Compression type
    uint32_t image_size_bytes; // Image size in bytes
    int32_t x_resolution_ppm;  // Pixels per meter
    int32_t y_resolution_ppm;  // Pixels per meter
    uint32_t num_colors;       // Number of colors
    uint32_t important_colors; // Important colors
} BMPHeader;
#pragma pack(pop)

/*
Struct to store a BMP image
*/
typedef struct
{
    BMPHeader header;
    uint8_t *data;
} BMPImage;

/*
Struct to store the image to be processed
*/
typedef struct
{
    int rows, cols;
    uint32_t **img;
} Image;

/*
Vector struct definition
*/
typedef struct
{
    struct
    {
        uint32_t color;
        int count;
    } colors[32];

    int curr;
    int m_idx;
} Vector;

/*
Kernel definition for convolution
*/
#define KERNEL_SZ 3

static const double kernel[KERNEL_SZ][KERNEL_SZ] =
    {
        {
            3.0 / 64,
            8.0 / 64,
            3.0 / 64,
        },
        {
            8.0 / 64,
            20.0 / 64,
            8.0 / 64,
        },
        {
            3.0 / 64,
            8.0 / 64,
            3.0 / 64,
        },
};

// MACROS to handle RGB values in colors
#define BYTE(num) (num & ((1 << 8) - 1))
#define RED(color) (BYTE((color >> 16)))
#define GREEN(color) (BYTE((color >> 8)))
#define BLUE(color) (BYTE(color))

// Vector data structure functionality (to find dominant colors)
void add_color(Vector *vec, uint32_t color);
uint32_t get_dom_color(Vector *vec);

// Image processing functionality
Image read_img(const char *filepath);
Image free_img(Image img);
void process_img(const Image img);
void display(const uint32_t img[8][8], const uint32_t match[8][8], char best_match);
double cmp_sector(const uint32_t img1[8][8], const uint32_t img2[8][8]);

#endif // ARTSCII_H_55FF061DA2AB9BB3
