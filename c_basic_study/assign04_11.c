#include <stdio.h>

void compare(int a1, int b1, int a2, int b2)
{

}

int main()
{
    int xpos1_r1, ypos1_r1, xpos2_r1, ypos2_r1;
    int xpos1_r2, ypos1_r2, xpos2_r2, ypos2_r2;

    scanf("%d %d %d %d", &xpos1_r1, &ypos1_r1, &xpos2_r1, &xpos2_r1);
    compare(xpos1_r1, xpos2_r1, ypos1_r1, ypos2_r1);
    scanf("%d %d %d %d", &xpos1_r2, &ypos1_r2, &xpos2_r2, &xpos2_r2);
    compare(xpos1_r2, xpos2_r2, ypos1_r2, ypos2_r2);

    printf("%d %d %d %d %d %d %d %d", xpos1_r1, ypos1_r1, xpos2_r1, ypos2_r1, xpos1_r2, ypos1_r2, xpos2_r2, ypos2_r2 );
    /*
    int count = 0, w = 0; // count는 case의 종류, w는 넓이

    if((xpos1_r1 <= xpos1_r2 && xpos1_r2 <= xpos2_r1) || )


    switch (count)
    {
        case 1:
            ;
        
    }
    */

}