#include <stdio.h>

int square(int m){
    return m * m;
}

int sq_add(int f, int s){
    int total;
    total = square(f) + square(s);
    return total;
}

int main(){
    int first, second, sum;

    printf("Enter two integers. \n");
    scanf("%d%d", &first, &second);

    sum = sq_add(first, second);
    printf("The result is %d\n", sum);
    return 0;
}