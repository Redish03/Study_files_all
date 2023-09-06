#include <iostream>
#include <cstring>

using namespace std;

int dp[42] = {0};
int zero_x, one_y;

int fib(int n)
{
    if (n == 0)
    {
        zero_x++;
        return 0;
    }
    if (n == 1)
    {
        one_y++;
        return 1;
    }
    if (dp[n] != 0)
        return dp[n];

    dp[n] = fib(n - 1) + fib(n - 2);
    return dp[n];
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        zero_x = 0;
        one_y = 0;
        cin >> N;
        fib(N);
        cout << zero_x << " " << one_y << '\n';
    }
}