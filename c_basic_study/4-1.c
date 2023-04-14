#include <stdio.h>

int add(int f, int s)
{
    int total;
    total = f + s;
    return total;
}

int main()
{
    int first, second, sum;

    printf("Enter two input integers.\n");
    scanf("%d%d", &first, &second);
    sum = add(first, second);
    printf("The result is %d.\n", sum);
    return 0;
}