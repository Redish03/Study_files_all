#define NDEBUG
#include <stdio.h>
#include <assert.h>

int factorial(int n){
    int result = 1;
    assert(n >= 0);
    while (n)
    {
        result *= n--;
    }
    return result;
}

int main()
{
    int first, second, larger, count, sum = 0;

    printf("Enter two integers.\n");
    scanf("%d%d", &first, &second);
    printf("Factorial of %d is %d.\n", first, factorial(first));

    assert(second != 0);
    printf("first/second is %d.\n", first / second);

    larger = (first > second);
    switch (larger)
    {
    case 1:
        printf("First is the larger.\n");
        break;

    case 0:
        printf("Second is the larger.\n");
        break;

    default:
        assert(0);
    }
    assert(first <= second);
    for (count = first; count <= second; count++){
        sum += count;
        assert(count >= first && count <= second);
    }
    printf("Sum from first to second is %d.\n", sum);
    return 0;
}