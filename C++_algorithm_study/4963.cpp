#include <iostream>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;

int visited[51][51] = {
    0,
};
int dx[] = {1, 0, -1, 0, -1, 1, 1, -1};
int dy[] = {0, -1, 0, 1, -1, -1, 1, 1};
int maps[51][51];
int x, y;
queue <pair<int, int>> q;

void bfs()
{
    while(!q.empty())
    {
        int cur_x = q.front().second;
        int cur_y = q.front().first;
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int nx = cur_x + dx[i];
            int ny = cur_y + dy[i];
            
            if(nx >= y || ny >= x || nx < 0 || ny < 0) continue;
            if(maps[ny][nx] == 0) continue;
            if(!visited[ny][nx])
            {
                q.push({ny, nx});
                visited[ny][nx] = 1;
            }
        }
    }
}

int main()
{
    while(true)
    {
        int count_island = 0;
        cin >> y >> x;
        if(x == 0 && y == 0) break;
        
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cin >> maps[i][j];
            }
        }

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if(!visited[i][j] && maps[i][j])
                {
                    q.push({i, j});
                    visited[i][j] = 1;
                    bfs();
                    count_island++;
                }
            }
        }
        cout << count_island << "\n";
        memset(visited, 0, sizeof(visited));
    }

    return 0;
}