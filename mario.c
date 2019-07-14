#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do{
        height = get_int("Height (Between 1 and 23): ");
    }while(height <= 0 || height > 23);

    int initialHeight = height;

    while(0 < height)
    {
        for (int d = initialHeight - height; d < initialHeight; d++){
            putchar(' ');
        }

        for (int a = height - 1; a < initialHeight; a++){
                putchar('#');
        }

        putchar(' ');
        putchar(' ');

        for (int b = height - 1; b < initialHeight; b++){
            putchar('#');
        }

        printf("\n");
        height--;
    }
}