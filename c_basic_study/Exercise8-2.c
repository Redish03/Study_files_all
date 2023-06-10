#include <stdio.h>

int is_prime(int n, int half)
{
    if(half == 1)
    {
        return 1;
    }
    else
    {
        if(n % half == 0) 
        {
            return 0;
        }
        else
        {
            int result = is_prime(n, half - 1);
            if(!result)
            {
                return 0;
            }
        }
    }
}

int main()
{
    int N;
    printf("Enter a natural number.\n");
    scanf("%d", &N);

    if(is_prime(N, N / 2))
    {
        printf("It is a prime number.");
    }
    else{
        printf("It is NOT a prime number.");
    }
    return 0;
}