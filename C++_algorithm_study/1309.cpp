#include <iostream>

using namespace std;

int DP[100001] = {0, };

int dp(int x)
{
    if(DP[x] != 0) return DP[x];
    if(x == 1) return 3;
    if(x == 2) return 7;
    if(x == 3) return 17;

    DP[x] = (2 * dp(x - 1) + dp(x - 2)) % 9901;
    return DP[x];
}

int main()
{
    int N;
    cin >> N;

    cout << dp(N);
}