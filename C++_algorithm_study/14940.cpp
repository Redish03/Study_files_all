#include <iostream>
#include <queue>

using namespace std;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
queue<pair<int, int>> q;
int N, M;
int arr[1001][1001];
int visited[1001][1001];

void bfs()
{
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        visited[x][y] = true;

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= N || ny >= M)
                continue;
            if (visited[nx][ny] || arr[nx][ny] == 0)
                continue;

            arr[nx][ny] = arr[x][y] + 1;
            visited[nx][ny] = true;
            q.push({nx, ny});
        }
    }
}
// 다 돌리고 남은 애들 중 visited 가 false가 있으면 -1로 바꾸기
int main()
{
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
            visited[i][j] = false;
            if (arr[i][j] == 2)
            {
                q.push({i, j});
                arr[i][j] = 0;
            }
        }
    }
    bfs();

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (!visited[i][j] && arr[i][j] == 1)
            {
                cout << -1 << " ";
                continue;
            }
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}