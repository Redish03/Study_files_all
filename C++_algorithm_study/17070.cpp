#include <iostream>

using namespace std;

int N;
int arr[17][17];
int dp[17][17];

void calc()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] == 1)
            {
                dp[i][j] = 0
            }
            if (i == 0 || j == 0)
            {
                dp[i][j] = 1;
            }
        }
    }
}

int main()
{
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
            dp[i][j] = 0;
        }
    }
    calc();
}