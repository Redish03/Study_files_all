#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
struct info
{
    int y, x, cnt, get;
};
int n, m, t, castle[100][100], visited[100][100][2], ans;
int dx[4] = { -1,1,0,0 }, dy[4] = { 0,0,-1,1 };
void bfs(int y,int x,int cnt,int get);
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(false);
    cin >> n >> m >> t;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> castle[i][j];
 
    //y좌표,x좌표,걸린시간,검획득여부
    bfs(0, 0, 0,0);
    if (ans>=1&&ans <= t)cout << ans << '\n';
    else cout << "Fail" << '\n';
}
void bfs(int y,int x,int cnt,int get)
{
    queue<info>q;
    q.push({ y,x,cnt,get });
    visited[y][x][get] = 1;
    while (!q.empty())
    {
        y = q.front().y;
        x = q.front().x;
        get = q.front().get;
        cnt = q.front().cnt;
        
        q.pop();
        //검을먹으면 get을 1로바꿔줌
        if (castle[y][x] == 2)get = 1;
        //도착하면 탈출하기
        //탈출해야 최단거리를 알수있음
        if (y == n - 1 && x == m - 1)
        {
            ans = cnt;
            return;
        }
        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            //검 얻었을 때
            if (get == 1)
            {
                if (ny >= 0 && nx >= 0 && ny < n && nx < m)
                {
                    if (visited[ny][nx][get] == 0)
                    {
                        visited[ny][nx][get] = cnt + 1;
                        q.push({ ny,nx,visited[ny][nx][get],get });
                    }
                }
            }
            //검 못먹었을 때
            else
            {
                if (ny >= 0 && nx >= 0 && ny < n && nx < m)
                {
                    if (visited[ny][nx][get] == 0 && castle[ny][nx] != 1)
                    {
                        visited[ny][nx][get] = cnt + 1;
                        q.push({ ny,nx,visited[ny][nx][get],get });
                    }
                }
            }
        }
    }
}
