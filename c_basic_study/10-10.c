#define MAX 100
#include <stdio.h>

void print_array(const int arr[], int length);
void swap(int*, int*);
void bubble_sort(int arr[], int length);

int main()
{
    int i = 0, temp, data[MAX];

    printf("Enter integers separated by a blank.\n");
    while(1){
        scanf("%d", &temp);
        if(temp < 0)
            break;
        data[i++] = temp;
    }

    printf("Before sorting: ");
    print_array(data, i);
    printf("\n");

    bubble_sort(data, i);
    printf("After sorting: ");
    print_array(data, i);
    printf("\n");
    return 0;
}

void print_array(const int arr[], int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void bubble_sort(int arr[], int length) 
{
    int pass, current;
    for (pass = 1; (pass < length); pass++) 
    {
        for (current = 0; current < (length - pass); current++)
        {
            if(arr[current] > arr[current + 1])
            {
                swap(&arr[current], &arr[current + 1]);
            }
        }
    }
}