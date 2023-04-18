#include <stdio.h>

int get_min(int a, int b, int c)
{
    int min;
    if(a < b)
        min = a;
    else   
        min = b;
    if(c < min)
        min = c;

    return min;
}

int main()
{
    int first, second, third;

    printf("Enter three integers.\n");
    scanf("%d%d%d", &first, &second, &third);
    printf("The minimum is %d.\n", get_min(first, second, third));
    return 0;
}