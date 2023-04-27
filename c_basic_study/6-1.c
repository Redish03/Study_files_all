#include <stdio.h>

int main()
{
    int sum = 0, count;
    count = 1;
    while (count <= 10)
    {
        sum += count;
        count++;
    }
    printf("Sum of 1 to 10 is %d.\n", sum);
    return 0;
}