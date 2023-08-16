#include <iostream>
#include <cmath>

using namespace std;

int dp[50001];

int main()
{
    int N, sq;

    cin >> N;
    sq = sqrt(N);

    for (int i = 1; i * i <= N; i++)
    {
        dp[i * i] = 1;
    }
    for (int i = 1; i <= N; i++)
    {
        if (dp[i] != 0)
            continue;
        for (int j = 1; j * j <= i; j++)
        {
            if (dp[i] != 0)
            {
                dp[i] = min(dp[i], dp[j * j] + dp[i - (j * j)]);
            }
            else
            {
                dp[i] = dp[j * j] + dp[i - j * j];
            }
        }
    }

    cout << dp[N];
}