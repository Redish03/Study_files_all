#include <stdio.h>

int main()
{
    int first = 50, second = 200, *p;

    printf("&first is %p.\n", &first);
    printf("&p is %p.\n", &p);

    p = &first;
    printf("p is %p.\n", p);
    printf("*p is %d.\n", *p);

    *p += 50;
    printf("*p changed to %d.\n", *p);

    p = &second;
    printf("*p changed to %d.\n", *p);

    return 0;
}