#include <stdio.h>

int main() {
    int i, *p, arr[] = {5, 10, 15, 20, 25};
    printf("arr[0] is %d.\n", arr[0]);
    printf("*arr is %d.\n", *arr);

    p = arr;
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", *(p + i));
    }
    printf("\n");

    p = arr;
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", *p++);
    }
    printf("\n");

    p = arr;
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", (*p)++);
    }
    printf("\n");
}