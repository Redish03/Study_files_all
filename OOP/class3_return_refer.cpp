#include <iostream>

using namespace std;

int sum(int x, int y)
{
    int z = x + y;
    return z;
}

int main()
{
    int a = 3, int b = 4;
    int result = sum(a, b);
    cout << result;
}