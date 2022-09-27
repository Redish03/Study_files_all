#include <stdio.h>

int main()
{
    int N;
    int count = 0;

    scanf("%d", &N);

    for(int i = 1; i <= N; i++)
    {
        count +=i*i;
    }
    printf("%d", count);
}