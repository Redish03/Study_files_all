#define MAX 6
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void print_array(const int*, int);
void swap(int*, int*);
void bubble_sort(int*, int);
int is_duplicate(const int *, int, int);
void set_numbers(int*);

void print_array(const int* arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}

void swap(int* p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void bubble_sort(int* arr, int length)
{
    int pass, current, sorted = 0;
    for (pass = 1; (pass < length) && (!sorted); pass++)
    {
        sorted = 1;
        for (current = 0; current < (length - pass); current++)
        {
            if(arr[current] > arr[current + 1])
            {
                swap(&arr[current], &arr[current + 1]);
                sorted = 0;
            }
        }
    }
}

int main()
{
    int money, i, lottery[MAX];
    while(1)
    {
        printf("Enter available money.\n");
        scanf("%d", &money);
        if(money == 0)
            break;
        printf("Possible sets of lottery numbers are,\n");
        for (i = 1; i <= money / 1000; i++)
        {
            set_numbers(lottery);
            bubble_sort(lottery, MAX);
            print_array(lottery, MAX);
            printf("\n");
        }
    }
    return 0;
}

int is_duplicate(const int* arr, int length, int n)
{
    int i;
    for (i = 0; i < length; i++)
    {
        if(arr[i] == n)
        {
            return 1;
        }
    }
    return 0;
}

void set_numbers(int* lotto)
{
    int i, num;
    Sleep(1000);
    srand(time(NULL));
    for (i = 0; i < MAX; )
    {
        num = 1 + rand() % 45;
        if(!is_duplicate(lotto, i, num))
            lotto[i++] = num;
    }
}