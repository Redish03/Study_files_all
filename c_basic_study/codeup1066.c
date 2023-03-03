#include<stdio.h>

int main() {

    int num[3];
    scanf("%d %d %d", &num[0], &num[1], &num[2]);
    printf("%d, %d, %d", num[0], num[1], num[2]);

    for (int i = 0; i < 3; i++) {
        if (num[i] % 2 == 0) {
            printf("even\n");
        }
        else if(num[i]%2==1){
            printf("odd\n");
        }

        return 0;
    }
}