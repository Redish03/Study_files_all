#include <stdio.h>

void swap(int **, int **);

int main()
{
    int first, second;
    int *fp = &first, *sp = &second;
    printf("Enter two integers to swap.\n");
    scanf("%d%d", &first, &second);
    printf("Before swap: *fp is %d and *sp is %d\n", *fp, *sp);
    swap(&fp, &sp);
    printf("After swap: *fp is %d and *sp is %d\n", *fp, *sp);
    return 0;
}

void swap(int** p, int** q) {
    int *temp;
    temp = *p;
    *p = *q;
    *q = temp;
}