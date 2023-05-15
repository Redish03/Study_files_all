#include <stdio.h>
#include <stdarg.h>

int find_min(int count, ...) 
{
    int min, temp, i;

    va_list(p);
    va_start(p, count);
    min = va_arg(p, int);
    for (int i = 2; i <= count; i++)
    {
        temp = va_arg(p, int);
        if(temp < min)
        {
            min = temp;
        }
    }
    va_end(p);
    return min;
}

int main()
{
    int arg_count = 3;
    printf("Minimum is %d.\n", find_min(arg_count, 30, 20, 10));
    return 0;
}