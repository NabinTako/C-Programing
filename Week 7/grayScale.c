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
    // workshop Q2
    int red, green, blue, alpha;
    for (int i = 0; i < height; i = i++)
    { // for row //for row takes one pixel 0,1,2,3
        for (int j = 0; j < width; j = j++)
        {                                           // for column //for column takes the other pixels which starts form 4
            red = img[4 * width * i + 4 * j];       // index[0]
            green = img[4 * width * i + 4 * j + 1]; // index[1]
            blue = img[4 * width * i + 4 * j + 2];  // index[2]
            // alpha = img[4 * width * i + 4 * j + 3]; // index[3] for transperancy

            int gray = (red + green + blue) / 3;

            // assigning the new values to rgb
            // red = gray;
            // green = gray;
            // blue = gray;

            // re-assigning the new value of rgb for grayscale of the image
            img[4 * width * i + 4 * j + 0] = gray;
            img[4 * width * i + 4 * j + 1] = gray;
            img[4 * width * i + 4 * j + 2] = gray;
            // We jump every 4 values for the width as each pixel holds 4 attributes.
        }
    }
    lodepng_encode32_file("grayScaleNaruto.png", img, width, height);
    free(img);
}