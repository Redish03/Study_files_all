#include <stdio.h>
#define true 1
#define false 0

int leap_year(int y){
    if((y % 4 == 0 && y % 100 != 0) || (y % 4 == 0 && y % 400 == 0))
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int year;
    while(1) {
        printf("Enter year.\n");
        scanf("%d", &year);
        if(year == -1){
            break;
        }
        if(leap_year(year))
        {
            printf("It is a leap year.\n");
        }
        else
            printf("It is NOT a leap year.\n");
    }
    return 0;
}