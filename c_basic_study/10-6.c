#include <stdio.h>
void swap(int *, int *);

int main(){
    int first, second;
    printf("Enter two numbers to swap.\n");
    scanf("%d%d", &first, &second);
    printf("Before swap: first = %d and second = %d.\n", first, second);
    swap(&first, &second);
    printf("After swap: first = %d and second = %d.\n", first, second);
    return 0;
}

void swap(int* p, int* q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}