#include <iostream>
#include <cstring>

using namespace std;

int dp[41] = {0};

int fib(int n)
{
    if (dp[n] != 0)
        return dp[n];
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;

    dp[n] = fib(n - 1) + fib(n - 2);
    return dp[n];
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        cout << fib(N) << '\n';
    }
}

/*
1 1 2 3 5 8
*/