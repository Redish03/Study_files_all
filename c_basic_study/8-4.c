#include <stdio.h>
int sum;

void sum_up(int n){
    sum += n;
    printf("Accumulated sum is %d.\n", sum);

}

int main(){
    int num, i;
    sum = 0;

    for (i = 1; i < 4; i++){
        printf("Enter an integer.\n");
        scanf("%d", &num);
        sum_up(num);
    }
    printf("Finally, the sum is %d.\n", sum);
    return 0;
}