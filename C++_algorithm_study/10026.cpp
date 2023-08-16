#include <iostream>
#include <queue>

using namespace std;

int N;
int arr[101][101];
int arr_abnor[101][101];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
bool visited[101][101] = {
    false,
};
queue<pair<int, int>> q;
queue<pair<int, int>> q_ab;

int bfs()
{
    int count = 0; 
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        visited[x][y] = true;
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(visited[nx][ny]) continue;
            if(nx < 0 || ny < 0 || nx >= N|| ny >= N) continue;
            if(arr[nx][ny] != arr[x][y]) continue;

            visited[nx][ny] = true;
            q.push(make_pair(nx, ny));
        }
    }
}

int main()
{
    char past;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
            if (i == 0 && j == 0)
            {
                past = arr[i][j];
                q.push(make_pair(i, j));
                q_ab.push(make_pair(i, j));
            }
            if (past != arr[i][j])
            {
                q.push(make_pair(i, j));
                q_ab.push(make_pair(i, j));
                past = arr[i][j]
            }

            if (arr[i][j] == 'G')
            {
                arr_abnor[i][j] = 'R';
            }
            else
            {
                arr_abnor[i][j] = arr[i][j];
            }
        }
    }
    bfs();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            visited[i][j] = false;
        }
    }

}