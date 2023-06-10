#include <stdio.h>

int main()
{
    int *p, arr[4] = {10, 20, 30, 40};

    printf("arr is %p.\n", arr);
    printf("arr + 1 is %p.\n", arr + 1);
    printf("sizeof(*arr) is %d.\n\n", sizeof(*arr));

    printf("&arr is %p.\n", &arr);
    printf("&arr + 1 is %p.\n", &arr + 1);
    printf("sizeof(*(&arr)) is %d.\n\n", sizeof(*(&arr)));

    p = arr;
    printf("p is %p.\n", p);
    printf("p + 1 is %p.\n", p + 1);
    printf("&p is %p.\n", &p);
    printf("&p + 1 is %p.\n", &p + 1);
    return 0;
}