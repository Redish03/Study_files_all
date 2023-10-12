#include <iostream>

using namespace std;

int self(int n)
{
    int sum = n;
    while (n != 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}

int main()
{
    bool check[10001] = {
        true,
    };
    for (int i = 1; i <= 10000; i++)
    {
        int n = self(i);
        if (n < 10001)
            check[n] = false;
    }

    for (int i = 1; i <= 10000; i++)
    {
        if (check[i] != false)
        {
            cout << i << endl;
        }
    }
}