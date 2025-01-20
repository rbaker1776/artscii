#ifndef IMAGE_H_CF3932E423F9524B
#define IMAGE_H_CF3932E423F9524B


typedef uint32_t** img_t;
typedef uint32_t[8][8] img_sec_t;

void read_img(const char* filepath, img_t* img);

void print_char(char c, const char* color);


#endif // IMAGE_H_CF3932E423F9524B
