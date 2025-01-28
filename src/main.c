#include "artscii.h"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Format: ./show <filepath>.bmp");
        return EXIT_FAILURE;
    }

    Image img = read_img(argv[1]); // Read in the image
    process_img((const Image)img); // Process the image and generate ASCII art
    img = free_img(img);           // Clean up

    return 0;
}
