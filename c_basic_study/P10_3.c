#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum = 0;
    float avg;
    printf("The number of courses: ");
    scanf("%d", &num);
    int *arr = (int *)malloc(num * sizeof(int));
    if(arr==NULL)
    {
        printf("malloc error.");
    }
    for (int i = 0; i < num; i++)
    {
        printf("[%d/%d]Score: ", i + 1, num);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float)sum / (float)num;

    for (int i = 0; i < num; i++)
    {
        printf("Course #%d : %d\n", i + 1, arr[i]);
    }
    printf("Average: %.3f\n", avg);
    free(arr);
    arr = NULL;
    return 0;
}