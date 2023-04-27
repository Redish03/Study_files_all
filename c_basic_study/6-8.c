#include <stdio.h>

int total(int, double, int);

int main()
{
    int principal;
    double interest;
    int year;
    printf("Enter principal, annual interest, and years.\n");
    scanf("%d%lf%d", &principal, &interest, &year);
    printf("Total is %d.\n", total(principal, interest, year));
}

int total(int p, double i, int y)
{
    double rate = 1.0;
    while(y > 0)
    {
        rate *= (1.0 + i);
        y--;
    }
    return (int)(p * rate);
}