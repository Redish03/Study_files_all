#include <iostream>

using namespace std;

int n, k;
int coin[101];
int DP[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> coin[i];
    }

    DP[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = coin[i]; j <= k; j++)
        {
            DP[j] = DP[j] + DP[j - coin[i]];
        }
    }
    cout << DP[k];
}
