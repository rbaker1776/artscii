#include <stdio.h>
#include "artscii.h"


#define KERNEL_SZ 3
static const double kernel[KERNEL_SZ][KERNEL_SZ] = {
    {  },
    { 0.125, 0.3125, 0.125 },
    {  },
};

void read_img(const char* filepath, uint32_t** img) {
    FILE* fptr = fopen(filepath, "rb");
}

void process_img(const uint32_t** img);

Color get_dominant_color(const uint32_t** img_sec);

void print_char(const char c, Color color);

double cmp_img(const uint32_t** img1, const uint32_t** img2);


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
