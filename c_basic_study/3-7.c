#include <stdio.h>

int main()
{
    int a, b;

    a = 0;
    a++;
    printf("a = %d.\n", a);
    b = a++;
    printf("a = %d. b = %d.\n", a, b);

    a = 0;
    ++a;
    printf("a = %d.\n", a);
    b = ++a;
    printf("a = %d. b = %d.\n", a, b);

    a = b = 0;
    printf("a = %d. b = %d.\n", (1 + a++) + 2, ++b);
    printf("a = %d. b = %d.\n", a, b);
    return 0;
}