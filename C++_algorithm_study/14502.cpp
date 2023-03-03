#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
queue<pair<int, int>> q;
int check[8][8] = {0};
int map[8][8];
vector<pair<int, int>> virus;
int N, M, ans = 0;

int dfs(int x, int y)
{
    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(map[i][j] == 2)
            {
                q.push(make_pair(i, j));
            }
        }
    }

    while(!q.empty())
    {
        int curx = q.front().first;
        int cury = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++)
        {
            int nx = curx + dx[i];
            int ny = cury + dy[i];
            if(nx < 0 || nx >= N || ny < 0|| ny >= M)
            if(map[nx][ny] == 0)
            {
                map[nx][ny] = 2;
                q.push({nx, ny});
            }
        }
    }

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(map[i][j] == 0)
            {
                count++;
            }
        }
    }
    return ans = max(count, ans);
}

int main()
{
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> map[i][j];
            if(map[i][j] == 0)
            {
                virus.push_back({i, j});
            }
        }
    }
    cout << dfs(0, 0);
}