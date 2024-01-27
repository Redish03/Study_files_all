#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>

using namespace std;

int N, M;
int arr[8][8];
int arr2[8][8];
bool visited[8][8];
int wall_count = 3;
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
int answer = -1;

void bfs()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            arr2[i][j] = arr[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            // 바이러스 발견시 BFS 시작.
            if (arr2[i][j] == 2)
            {
                cout << "ok" << endl;
                queue<pair<int, int>> q;

                q.push({i, j});
                visited[i][j] = true;

                while (!q.empty())
                {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();

                    for (int k = 0; k < 4; k++)
                    {
                        int nx = x + dx[k];
                        int ny = y + dy[k];

                        if (!visited[nx][ny] && arr2[nx][ny] == 0)
                        {
                            q.push({nx, ny});
                            visited[nx][ny] = true;
                            arr2[nx][ny] = 2;
                        }
                    }
                }
            }
        }
    }

    memset(visited, false, sizeof(visited));

    int tmp = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr2[i][j] == 0)
                tmp++;
        }
    }

    if (tmp > answer)
    {
        answer = tmp;
    }
}

void stand_wall()
{
    if (wall_count == 0)
    {
        return bfs();
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] != 0)
                continue;

            arr[i][j] = 1;
            wall_count--;
            stand_wall();
            wall_count++;
            arr[i][j] = 0;
        }
    }
}

int main()
{
    cin >> N >> M;

    memset(arr, -1, sizeof(arr));
    memset(arr2, -1, sizeof(arr2));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
            visited[i][j] = false;
        }
    }
    stand_wall();
    cout << answer;
}