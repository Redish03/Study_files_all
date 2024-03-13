#include <iostream>
#include <queue>

using namespace std;

int N, M, H;
int arr[102][102][102];
queue<pair<pair<int, int>, int>> q;
bool check[102][102][102] = {
    false,
};
int dx[] = {0, 0, 0, 0, -1, 1};
int dy[] = {0, 0, 1, -1, 0, 0};
int dh[] = {1, -1, 0, 0, 0, 0};

void bfs()
{
    while (!q.empty())
    {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int h = q.front().second;
        check[x][y][h] = true;

        q.pop();
        for (int i = 0; i < 6; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nh = h + dh[i];

            if (nx < 0 || ny < 0 || nh < 0 || nx >= M || ny >= N || nh >= H)
                continue;
            if (check[nx][ny][nh] || arr[nx][ny][nh] != 0)
                continue;

            q.push({{nx, ny}, nh});
            check[nx][ny][nh] = true;
            arr[nx][ny][nh] = arr[x][y][h] + 1;
        }
    }
}

bool check_tomato()
{
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < M; k++)
            {
                if (arr[k][j][i] != -1 && !check[k][j][i]) // arr[k][j][i]가 벽이 아니면서 방문하지 않은 칸
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int find_min_day()
{
    int min_day = -1;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < M; k++)
            {
                if (arr[k][j][i] > min_day)
                {
                    min_day = arr[k][j][i];
                }
            }
        }
    }
    return min_day;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> M >> N >> H;
    bool check_all_one = true;

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < M; k++)
            {
                cin >> arr[k][j][i];
                if (arr[k][j][i] == 1)
                {
                    q.push({{k, j}, i});
                }
                else if (arr[k][j][i] == 0)
                {
                    check_all_one = false;
                }
            }
        }
    }
    if (check_all_one)
    {
        cout << 0;
        return 0;
    }

    bfs();

    if (!check_tomato())
    {
        cout << -1;
        return 0;
    }
    cout << find_min_day() - 1;
}