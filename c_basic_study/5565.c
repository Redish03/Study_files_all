#include <stdio.h>

int main() 
{
    int a[12];

    for (int i = 0; i < 9; i= i+4) {
        scanf("%d %d %d %d", &a[i], &a[i + 1], &a[i + 2], &a[i + 3]);
    }

    for (int i = 0; i < 12; i++)
    {
        printf("%d ", a[i]);
    }
    // 검사하기
    for (int k = 0; k < 9 ; k = k + 4 ) {
        int count_0 = 0;
        for (int l = k; l < k + 4; l++) {
            if (a[l] == 0) {
                count_0++;
            }
        }
                
        switch (count_0) {
        case 1:
            printf("A\n");
        case 2:
            printf("B\n");
        case 3:
            printf("C\n");
        case 4:
            printf("D\n");
        case 0:
            printf("E\n");
        }
            
    }
}