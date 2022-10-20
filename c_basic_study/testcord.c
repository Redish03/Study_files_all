#include <stdio.h>

int main()
{
    int a = 5, b = 3;

    a = b, b = a;
 

    printf("%d %d", a, b);

}