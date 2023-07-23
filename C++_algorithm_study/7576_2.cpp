#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M;
int maps[1001][1001];
int Zero_exist = false;
queue<pair<int, int>> q;
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
int day_count = 0;

void bfs()
{
    while (!q.empty())
    {
        int curx = q.front().first;
        int cury = q.front().second;
        q.pop();
        day_count++;

        for (int i = 0; i < 4; i++)
        {
            int nx = curx + dx[i];
            int ny = cury + dy[i];

            if (nx < 0 || ny < 0 || nx >= N || ny >= M)
                continue;
            if (maps[nx][ny] != 0)
                continue;

            maps[nx][ny] = maps[curx][cury] + 1;
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
            cin >> maps[i][j];
            if (maps[i][j] == 0)
            {
                Zero_exist = true;
            }
            if (maps[i][j] == 1)
            {
                q.push(make_pair(i, j));
            }
        }
    }

    if (!Zero_exist)
    {
        cout << 0;
        return 0;
    }

    bfs();

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (maps[i][j] == 0)
            {
                cout << -1;
                return 0;
            }
            if (day_count < maps[i][j])
            {
                day_count = maps[i][j];
            }
        }
    }

    cout << day_count - 1;
    return 0;
}