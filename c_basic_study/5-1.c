#include <stdio.h>

void odd_even(int n){
    if(n%2 == 1)
        printf("Odd number.\n");

    else
        printf("Even number.\n");
    return;
}

int main()
{
    int num;
    printf("Enter an integer.\n");
    scanf("%d", &num);
    odd_even(num);
    return 0;
}