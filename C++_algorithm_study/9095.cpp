#include <iostream>

using namespace std;
int dp(int x);

int d[12];

int main()
{
    int N, T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> N;
        cout << dp(N) << '\n';
    }
}

int dp(int x)
{
    if (d[x] != 0)
        return d[x];
    if (x == 1)
        return 1;
    if (x == 2)
        return 2;
    if (x == 3)
        return 4;

    return d[x] = dp(x - 1) + dp(x - 2) + dp(x - 3);
}