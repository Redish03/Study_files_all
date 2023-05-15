#include <stdio.h>

void recurse(int n)
{
    if(n==0)
        return;
    else {
        recurse(n - 1);
        printf("%d ", n);
    }
}

int main()
{
    int num;
    printf("Enter a positive integer.\n");
    scanf("%d", &num);
    recurse(num);
    printf("\n");
    return 0;
}