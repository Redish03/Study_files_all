#include <iostream>

using namespace std;

int power(int x)
{
    return (x * x);
}

int power (int x, int y)
{
    int result = 1;

    for (int i = 0; i < y; i++)
    {
        result *= x;
    }
    return result;
}

int main()
{
    cout << power(3) << endl;
    cout << power(3, 3) << endl;
}