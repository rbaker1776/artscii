#ifndef ARTSCII_H_55FF061DA2AB9BB3
#define ARTSCII_H_55FF061DA2AB9BB3

#include <stdint.h>


typedef enum Color
{
} Color;


void read_img(const char* filepath, uint32_t** img);

void process_img(const uint32_t** img);

Color get_dominant_color(const uint32_t** img_sec);

void print_char(const char c, Color color);

double cmp_img(const uint32_t** img1, const uint32_t** img2);


#endif // ARTSCII_H_55FF061DA2AB9BB3
