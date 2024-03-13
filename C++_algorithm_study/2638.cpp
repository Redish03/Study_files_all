#include <iostream>
#include <queue>

using namespace std;

int N, M;
int arr[101][101];
int day_after_arr[101][101];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
queue<pair<int, int>> q;

void bfs()
{
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        int blank_check = 0;

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >=)
            {
            }
            if (arr[nx][ny] == 0)
                blank_check++;
        }

        if (blank_check >= 2)
        {
            
        }
    }
}

int main()
{
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
            day_after_arr[i][j] = arr[i][j];
            if (arr[i][j] == 1)
            {
                q.push({i, j});
            }
        }
    }
}