#include <iostream>

using namespace std;

int main()
{
    long long int S;
    long long int count = 0;
    long long int sum = 0;

    cin >> S;

    for (int i = 1;; i++)
    {
        sum += i;
        if (sum > S)
        {
            break;
        }
        count++;
    }
    cout << count;
}