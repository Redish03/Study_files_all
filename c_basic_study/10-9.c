#define MAX 100
#define SWAP(a, b, tmp) ((tmp) = (a); (a) = (b); (b) = (tmp);)
#include <stdio.h>

void print_array(const int arr[], int length);
void swap(int*, int*);
void selection_sort(int arr[], int length);

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

    selection_sort(data, i);
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

void selection_sort(int arr[], int length) 
{
    int last, largest, current;
    for (last = length - 1; last > 0; last--)
    {
        largest = 0;
        for (current = 1; current <= last; current++)
        {
            if(arr[current] > arr[largest])
                largest = current;
        }
        int tmp;
        SWAP(arr[largest], arr[last], tmp);
        swap(&arr[largest], &arr[last]);
    }
}