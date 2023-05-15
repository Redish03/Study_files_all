#include <stdio.h>

long long fib(long long n)
{
    if(n < 3)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}

int main()
{
    long long num;
    printf("Enter a number N.\n");
    scanf("%lld", &num);
    printf("%lldth fibonacci number is %lld.\n", num, fib(num));
    return 0;
}