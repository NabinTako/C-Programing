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
    int red, green, blue;

    for (int i = 0; i < width * height * 4; i = i + 4)
    {
        int gray = (img[i] + img[i + 1] + img[i + 2]) / 3;
        img[i] = gray;
        img[i + 1] = gray;
        img[i + 2] = gray;
    }
    lodepng_encode32_file("grayScaleNaruto.png", img, width, height);
    free(img);
}