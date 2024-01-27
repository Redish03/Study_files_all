#include <iostream>

using namespace std;

int A, B, C;

int power(long long n, int coef, int mod)
{
    long long answer = 1;

    while (coef > 0)
    {
        if (coef % 2)
        {
            answer *= n;
            answer %= mod;
        }

        n *= n;
        n %= mod;

        coef /= 2;
    }
    return answer;
}

int main()
{
    cin >> A >> B >> C;

    cout << power(A, B, C);
}