#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
int arr[1001][1001];
bool visited[1001][1001];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
queue<pair<int, int>> q;
bool Zero_exist = false;

void bfs()
{
    while (!q.empty())
    {
        const auto &[x, y] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= N || ny >= M)
                continue;
            if (visited[nx][ny])
                continue;
            if (arr[nx][ny] == -1)
                continue;

            visited[nx][ny] = true;
            arr[nx][ny] = arr[x][y] + 1;
            q.push(make_pair(nx, ny));
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
            visited[i][j] = 0;
            if (arr[i][j] == 1)
            {
                q.push(make_pair(i, j));
                visited[i][j] = 1;
            }
            else if (arr[i][j] == -1)
            {
                visited[i][j] = 1;
            }
            if(arr[i][j] == 0) {
                Zero_exist = true;
            }
        }
    }

    bfs();

    int Max = 0;

    if(!Zero_exist) {
        cout << 0;
        return 0;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            Max = max(Max, arr[i][j]);
            if (arr[i][j] == 0)
            {
                cout << -1;
                return 0;
            }
        }
    }

    cout << Max;
}