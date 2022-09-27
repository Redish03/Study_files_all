#include <stdio.h>

int main()
{
    int xpos = 0;
    int ypos = 0;
    int N;

    scanf("%d", &N);
    
    for(int i = 0; i <= N; i++)
    {
        if(ypos % 2 == 0)
        {
            xpos = 0;
            for(int j = 0; j <= N; j++)
            {
                printf("%d %d\n", xpos, ypos);
                xpos ++;
            }
        }
    	else
        {
            xpos = N;
            for(int k = 0; k <= N; k++)
            {
                printf("%d %d\n", xpos, ypos);
                xpos --;
            }
        }
        ypos++;
    }

    return 0;
}