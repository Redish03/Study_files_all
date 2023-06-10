#include <stdio.h>
#include <time.h>

long long factorial(int n)
{
    if(n == 1)
        return 1;
    else 
    {
        return (n * factorial(n - 1));
    }
}

int binomialcoeff(int num, int k)
{
    int bino;
    bino = factorial(num) / (factorial(k) * factorial(num - k));
    return bino;
}

int main()
{
    int N, K, result;
    float time_end;
    clock_t start, end;
    
    printf("Enter n and k of C(n, k).\n");
    scanf("%d%d", &N, &K);
    start = (int)clock();
    result = binomialcoeff(N, K);
    end = (int)clock();
    time_end = ((float)(end - start) / (float)CLOCKS_PER_SEC);
    printf("C(%d, %d) is %d\n", N, K, result);
    printf("Time elapsed for binomial coefficient is %.3f seconds.\n", time_end);
    return 0;
}