#include <stdio.h>

int square(int m)
{
    return m * m;
}

int square_add(int f, int s)
{
    int total;
    total = square(f) + square(s);
    return total;
}

int main()
{
    int first, second, sum;

    printf("Enter two integers.\n");
    scanf("%d%d", &first, &second);
    sum = square_add(first, second);
    printf("The result is %d.\n", sum);
    return 0;
}