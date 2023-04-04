// 모호성 주의 관련 
#include <iostream>

using namespace std;

char squard(char c)
{
    return (c * c);
}

long squard(long val)
{
    return (val * val);
}

int main()
{
    cout << square(3);
    return 0;
}