#include <stdio.h>
#define HEIGHT 6
#define WIDTH 6

void binary_image(int arr[HEIGHT][WIDTH])
{
    const int threshold = 127;

    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            if(arr[i][j] <= threshold)
            {
                arr[i][j] = 0;
            }
            else
            {
                arr[i][j] = 255;
            }
        }
    }
    
    printf("\n");
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int image[HEIGHT][WIDTH] = {
    {255, 255, 255, 255, 255, 195},
    {255, 255, 255, 242, 129, 50},
    {255, 255, 185, 61, 68, 110},
    {255, 133, 42, 85, 109, 110},
    {112, 56, 99, 107, 96, 109},
    {66, 98, 98, 97, 100, 104}};

    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            printf("%d\t", image[i][j]);
        }
        printf("\n");
    }

    binary_image(image);
}