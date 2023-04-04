#include <stdio.h>

int main()
{
    int a = 4, b = 3, c = 2, d = 1;

    printf("%d\n", (a > b) && (c > d));
    printf("%d\n", (a < b) || (c > d));
    printf("%d\n", (a < b) && (c > d));
    printf("%d\n", (a > b) && (c > d));
    printf("%d\n", (a < b || c > d) && (a == b && c>= d));

    printf("%d\n", !(a > b));
    printf("%d\n", !d);
    printf("%d\n", !a);
}