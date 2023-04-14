#include <stdio.h>
#include <math.h>

int square_add(int, int);

int main()
{
    int first, second, sum;

    printf("Enter two input integers.\n");
    scanf("%d%d", &first, &second);
    sum = square_add(first, second);
    printf("The result is %d.\n", sum);

    return 0;
}

int square_add(int f, int s)
{
    double total;
    total = pow((double)f, 2.0) + pow((double)s, 2.0);
    return (int)total;
}