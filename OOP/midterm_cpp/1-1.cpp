#include <iostream>

using namespace std;

int main()
{
    int k, n = 0;
    int sum = 0;
    cout << "Enter number >>";
    cin >> n;
    for (int k = 1; k <= n; k++)
    {
        sum += k;
    }

    cout << "sum : " << sum;
}