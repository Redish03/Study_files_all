#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int arr[1001][1001];
int dp[1001][1001];

int main()
{
    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cin >> arr[i][j];
        }
    }
    int answer = -1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            if(!arr[i][j])
            {
                if(!dp[i - 1][j] || !dp[i - 1][j - 1] || !dp[i][j - 1]) dp[i][j] = 1;
                else dp[i][j] = min(dp[i][j - 1], min(dp[i - 1][j - 1], dp[i - 1][j])) + 1;
            }
            answer = max(answer, dp[i][j]);
        }
    }
    cout << answer;
}