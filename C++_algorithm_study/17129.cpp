#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int maps[3001][3001];
int dist[3001][3001] = {0, };
queue<pair<int, int>> q;
bool check[3001][3001] = {false};
int N, M;

void bfs(int x, int y)
{
    q.push(make_pair(x, y));
    dist[x][y] = 1;
    check[x][y] = true;
    while(!q.empty())
    {
        int nx = q.front().first;
        int ny = q.front().second;
        q.pop();
        
        for(int i = 0; i < 4; i++)
        {
            int curx = nx + dx[i];
            int cury = ny + dy[i]; 

            if(curx < 0 || cury < 0 || curx >= N || cury >= M)
            {
                continue;
            }
            if(maps[curx][cury] == 1)
            {
                continue;
            }
            if(!check[curx][cury])
            {
                check[nx][ny] = true;
                dist[curx][cury] += dist[nx][ny] + 1;
                if(maps[curx][cury] == 3 || maps[curx][cury] == 4 || maps[curx][cury] == 5)
                {
                    cout << "TAK" << '\n';
                    cout << maps;
                }
                q.push(make_pair(curx, cury));           
            }
        }
    }
    printf("NIE");
}


int main()
{
    cin >> N >> M;
    int sx, sy;
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < str.length(); j++)
        {
            maps[i + 1][j + 1] = str[j] - '0';
            if(maps[i + 1][j + 1] == 2)
            {
                sx = i + 1;
                sy = j + 1;
            }
        }
    }

    bfs(sx, sy);
}