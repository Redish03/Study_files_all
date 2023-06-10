#include <stdio.h>

int main()
{
    int num, *p;
    p = &num;
    *p = 5;

    printf("&num = %p, num = %d.\n", &num, num);
    printf("p = %p, *p = %d, &p = %p\n", p, *p, &p);

    printf("sizeof(p) = %d.\n", sizeof(p));
    printf("sizeof(*p) = %d.\n", sizeof(*p));
    return 0;
}