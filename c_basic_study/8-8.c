#include <stdio.h>

void increment(int m)
{
    m++;
    printf("Inside function, m is %d.\n", m);
    return;
}

int main()
{
    int a = 10;
    printf("Before calling function, a is %d,\n", a);
    increment(a);
    printf("After calling function, a is %d.\n", a);
    return 0;
}