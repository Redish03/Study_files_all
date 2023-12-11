#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int N, M;
vector<vector<int>> v;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
bool visited[101][101];
queue<pair<int, int>> q;
int count = 0;

void bfs()
{
    q.push({0, 0});
    visited[0][0] = true;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;

        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= N || ny >= M)
                continue;
            if (v[nx][ny] == 0 || visited[nx][ny])
                continue;
            visited[nx][ny] = true;
            v[nx][ny] = v[x][y] + 1;
            q.push({nx, ny});
        }
    }
}

int main()
{
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        vector<int> inst;
        for (int j = 0; j < M; j++)
        {
            char c;
            cin >> c;

            inst.push_back((int)c - 48);
            visited[i][j] = false;
        }
        v.push_back(inst);
    }
    bfs();
    cout << v[N - 1][M - 1];
}