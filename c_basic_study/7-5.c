#include <stdio.h>
#define true 1
#define false 0

int is_prime(int n){
    int divider, remainder, prime = true;

    for (divider = 2; divider < n; divider++){
        remainder = n % divider;
        if(remainder = 0){
            prime = false;
            break;
        }
    }
    return prime;
}

int main(){
    int num;
    printf("Enter an integer.\n");
    scanf("%d", &num);
    if(is_prime(num)){
        printf("It is a prime number.\n");
    }
    else
        printf("It is NOT a prime number.\n");
    return 0;
}