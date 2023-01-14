#include <stdio.h>
#include <stdlib.h>
#include "lodepng.h"

int main()
{
    unsigned char *img;
    unsigned int width, height;
    unsigned int error;

    error = lodepng_decode32_file(&img, &width, &height, "naruto.png");
    if (error)
    {
        printf("%u : %s\n", error, lodepng_error_text(error));
    }
    // Workshop Question 1

    for (int i = 0; i < width * height * 4; i = i + 4)
    {
        img[i] = 255 - img[i];
        img[i + 1] = 255 - img[i + 1];
        img[i + 2] = 255 - img[i + 2];
    }
    lodepng_encode32_file("-VE Naruto.png", img, width, height);
    free(img);
}