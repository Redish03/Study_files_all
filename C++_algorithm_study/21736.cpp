#include <iostream>
#include <queue>

using namespace std;

int N, M;
char maps[601][601];
bool visited[601][601];
queue<pair<int, int>> q;
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
int count_people = 0;

void bfs(int x, int y)
{
    q.push(make_pair(x, y));
    while (!q.empty())
    {
        int curx = q.front().first;
        int cury = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = curx + dx[i];
            int ny = cury + dy[i];

            if (nx < 0 || ny < 0 || nx >= N || ny >= M)
                continue;
            if (visited[nx][ny])
                continue;
            if (maps[nx][ny] == 'X')
                continue;

            if (maps[nx][ny] == 'P')
                count_people++;
            visited[nx][ny] = 1;
            q.push(make_pair(nx, ny));
        }
    }
}

int main()
{
    int I_x, I_y;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> maps[i][j];
            visited[i][j] = 0;
            if (maps[i][j] == 'I')
            {
                I_x = i;
                I_y = j;
            }
        }
    }
    bfs(I_x, I_y);
    if (count_people == 0)
    {
        cout << "TT";
        return 0;
    }
    cout << count_people;
}