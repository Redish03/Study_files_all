#include <stdio.h>
 
void test_static()
{
    static int i;
    printf("%d\n", i);
    i++;
}
 
int main()
{
    test_static();
    test_static();
    test_static();
    return (0);
}