#include<iostream>
#include <string>
#include <queue>
#include <tuple>
using namespace std;
int n, m;
int map[1001][1001] = {0};
bool visit[2][1001][1001]; //벽을 부수고 온지 아닌지 구별해서 저장
int dx[] = {0, 0, -1, 1}; //상하좌우
int dy[] = {1, -1, 0, 0}; //상하좌우
int ans = 1000 * 1000;
 
void bfs(int a, int b, int cnt, bool destory)
{
    queue<tuple<int, int, int, bool>> q;
    q.push(make_tuple(a, b, cnt, destory));
 
    while(!q.empty())
    {
        int x = get<0>(q.front());
        int y = get<1>(q.front());
        cnt = get<2>(q.front());
        destory = get<3>(q.front());
        q.pop();
        if(x == m-1 && y == n-1)
        {
            ans = cnt;
            break;
        }
        
        for (int i = 0; i < 4;i++)
        {
            int n_x = x + dx[i];
            int n_y = y + dy[i];
 
            if (n_x < m && n_x >= 0 && n_y < n && n_y >= 0)
            {
                if(destory)
                {// 벽을 부수고 온지 아닌지 구별
                    if(!visit[1][n_y][n_x])
                    {
                        if(map[n_y][n_x] == 0)
                        {
                            visit[1][n_y][n_x] = true; 
                            q.push(make_tuple(n_x, n_y, cnt+1, destory));  
                        }
                    }
                }
                else
                {
                    if(!visit[0][n_y][n_x])
                    {
                        if(map[n_y][n_x] == 0)
                        {
                            visit[0][n_y][n_x] = true;
                            q.push(make_tuple(n_x, n_y, cnt+1, destory));  
                        }
                        else if(map[n_y][n_x] == -1)
                        {
                            destory = true;
                            visit[0][n_y][n_x] = true;
                            q.push(make_tuple(n_x, n_y, cnt+1, destory));
                            destory = false;
                        }
                    }
                }
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    string temp;
    for (int i = 0; i < n;i++)
    {
        cin >> temp;
        for (int k = 0; k < m; k++)
        {
            if(temp[k] == '1')
            {
                map[i][k] = -1;
            }
        }
    }
    visit[0][0][0] = true;
    bfs(0, 0, 1, false);
    if(ans == 1000*1000)
    {
        cout << -1;
    }
    else
    {
        cout << ans;
    }
    return 0;
}
 

//https://hagisilecoding.tistory.com/17