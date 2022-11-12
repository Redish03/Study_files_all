#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int x, y, z;
    if(a > b && b > c)
    {
        x = c;
        y = b;
        z = a;
    }
    else if(a > b && c > b)
    {
        x = ;
        y = b;
        z = c;
    }
    else if(b > a && a > c)
    {
        x = b;
        y = a;
        z = c;
    }
    else if(b > c && c > a)
    {
        x = b;
        y = c;
        z = a;
    }
    else if(c > b && b > a)
    {
        x = c;
        y = b;
        z = a;
    }
    else
    {
        x = c;
        y = a;
        z = b;
    }

    a = x;
    b = y;
    c = z;

    printf("%d %d %d\n", a, b, c);
    return 0;
}