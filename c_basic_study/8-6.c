#include <stdio.h>

void sum_up(int n)
{
    static int sum = 0;

    sum += n;
    printf("Accumulated sum is: %d.\n", sum);
}

int main(){
    int num, i;
    
    for (i = 1; i < 4; i++){
        printf("Enter an integer.\n");
        scanf("%d", &num);
        sum_up(num);
    }

    return 0;
}