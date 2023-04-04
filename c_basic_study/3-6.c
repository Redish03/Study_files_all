#include <stdio.h>

int main()
{
    int a, b;

    a = 8;
    a += 2;
    printf("a = %d.\n", a);

    b = 2;
    a /= b;
    printf("a = %d.\n", a);
    return 0;
}