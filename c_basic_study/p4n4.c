#include <stdio.h>

int main()
{
    int k;
    int xpos = 0, ypos = 0;
    int count = 0;
    scanf("%d", &k);

    for(int i = 0; i <= k; i++)
    {
        ypos = count;
        for(int j = 0; j <= count; j++)
        {
            xpos = j;
            printf("%d %d\n", xpos, ypos);
            ypos--;
        }
        count ++;
    }
}