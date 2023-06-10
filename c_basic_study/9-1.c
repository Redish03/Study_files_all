#define MAX 5
#include <stdio.h>

int main()
{
    int i, sum = 0;
    double average;
    int rabbit[MAX];

    printf("Enter weights of five rabbits.\n");
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &rabbit[i]);
    }

    for (i = 0; i < MAX; i++)
    {
        sum += rabbit[i];
    }
    printf("Average weight is %.3lf.\n", ((double)sum) / MAX);

    printf("&rabbit[0] is at %p.\n", &rabbit[0]);
    printf("&rabbit[1] is at %p.\n", &rabbit[1]);
    printf("rabbit is %p.\n", rabbit);
    return 0;
}