#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int arr[10];
int memo[10];

void dfs(int num, int count_)
{
    if (count_ == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << memo[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < num)
        {
            continue;
        }
        memo[count_] = arr[i];
        dfs(arr[i], count_ + 1);
    }
}

int main()
{
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N);
    dfs(arr[0], 0);
}