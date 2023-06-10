#include <stdio.h>
#include <time.h>

int binomialcoeff(int n, int k)
{
    if(k == n || k == 0 || n == 1)
    {
        return 1;
    }
    else{
        return binomialcoeff(n - 1, k) + binomialcoeff(n - 1, k - 1);
    }
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

// 7 5
// 7! / 5!2!
// coeff(6, 5) + coeff()