#include <iostream>
#include <algorithm>
using namespace std;

int arr[301];
int DP[10001];

int dp(int x)
{
    DP[1] = arr[1];
    DP[2] = arr[2] + arr[1];
    DP[3] = max(arr[1] + arr[3], arr[2] + arr[3]);

    for (int i = 4; i <= x; i++)
    {
        DP[i] = max(arr[i - 1] + DP[i - 3], DP[i - 2]) + arr[i];
    }
    return DP[x];
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    cout << dp(n);
}