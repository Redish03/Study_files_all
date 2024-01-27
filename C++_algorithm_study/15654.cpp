#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int arr[10];
int ans[10];
int visited[10];

void dfs(int idx, int count_)
{
    if (count_ == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < N; i++)
    {
        if (visited[i] != 0)
        {
            continue;
        }
        visited[i] = 1;
        ans[count_] = arr[i];
        dfs(i + 1, count_ + 1);
        visited[i] = 0;
    }
}

int main()
{
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        visited[i] = 0;
    }
    sort(arr, arr + N);
    dfs(0, 0);
}