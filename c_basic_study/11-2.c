#define MAX 5
#include <stdio.h>

int main() {
    int i, sum, *p, arr[] = {5, 10, 15, 20, 25};

    sum = 0;
    for (p = arr; p < &arr[MAX]; p++)
    {
        sum += *p;
    }
    printf("Sum is %d.\n", sum);

    sum = 0;
    for (p = arr; p < &arr[MAX]; p++)
    {
        sum += *p;
    }
    printf("Sum is %d.\n", sum);

    sum = 0;
    p = arr;
    for (p = arr; p < &arr[MAX]; p++)
    {
        sum += *p;
    }
    printf("Sum is %d.\n", sum);
    return 0;
}