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

int to_last_year(int year){
    int i, total = 0;
    for (i = 1; i <= (year - 1); i++){
        if(leap_year(i))
            total += 366;
        else
            total += 365;
    }
    return total;
}


int main() 
{
    int year;

    while(1){
        printf("Enter year.\n");
        scanf("%d", &year);
        printf("Days up to last year is %d.\n", to_last_year(year));
        if(year == -1){
            break;
        }
    }
}