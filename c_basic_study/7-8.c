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

int to_last_year(int year, int month){
    int i, total = 0;

    for (i = 1; i <= (month - 1); i++){
        if(i == 1 ||i == 3 ||i == 5 ||i == 7 ||i == 8 ||i == 10)
            total += 31;
        else if(i == 4 || i == 6 || i == 9 || i == 11)
            total += 30;
        else{
            if(leap_year(year))
            {
                total += 29;
            }
            else{
                total += 28;
            }
        }
    }
    return total;
}


int main() 
{
    int year, month;

    while(1){
        printf("Enter year and month.\n");
        scanf("%d%d", &year, &month);
        if(year == -1)
            break;
        printf("Days up to last year is %d.\n", to_last_year(year, month));
    }
}