#include <stdio.h>

int current_min(int n, int count) {
    static int min;
    if(count = 0) {
        min = n;
        return min;
    }
    else{
        if(min > n){
        min = n;
        return min;
        }
    }
}

int main(){
    int N, mins;

    printf("Enter a number.\n");
    scanf("%d", &N);
    printf("Current in is %d.\n", N);
    mins = current_min(N, 0);

    while(N > 0)
    {
        printf("Enter a number.\n");
        scanf("%d", &N);
        if(N < 0)
            break;
        mins = current_min(N, 1);
        printf("Current min is %d\n", mins);
    }
}