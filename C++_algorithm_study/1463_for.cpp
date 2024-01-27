#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int arr[1000001] = {0};
int N;
vector<int> v;
#define MAX 100000

int dp(int x)
{
    v[1] = 0;
    v[2] = 1;
    v[3] = 1;
    for (int x = 4; x <= N; x++)
    {
        int a = MAX, b = MAX, c = MAX;

        if (x % 3 == 0)
        {
            a = v[x / 3] + 1;
        }
        if (x % 2 == 0)
        {
            b = v[x / 2] + 1;
        }
        c = v[x - 1] + 1;
        v[x] = min({a, b, c});
    }
    return v[x];
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> N;

    for (int i = 0; i < N + 1; i++)
    {
        v.push_back(0);
    }

    cout << dp(N);
}