#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int input[100001];
vector<int> dp;

int Max = -999999;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> input[i];
    }
    dp.push_back(input[0]);

    for (int i = 1; i < N; i++)
    {
        dp.push_back(max(input[i], dp[i - 1] + input[i]));
    }

    for (int i = 0; i < N; i++)
    {
        if (dp[i] > Max)
        {
            Max = dp[i];
        }
    }

    cout << Max;
}