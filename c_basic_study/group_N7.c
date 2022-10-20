#include <stdio.h>

int main()
{
    int px, py;
    int bx, by;

    int width, height;

    scanf("%d%d", &px, &py);
    scanf("%d%d%d%d", &bx, &by, &width, &height);

    int ax = bx;
    int ay = bx + height;
    int cx = bx + width;
    int cy = by;

    if( bx <= px && px <= cx && by <= py && py <= ay)
    {
        if(py == by || py == ay || px == bx || px == cx)
        {
            printf("border");
        }
        else
        {
            printf("inside");
        }
    } 
    else
    {
        printf("outside");
    }
}