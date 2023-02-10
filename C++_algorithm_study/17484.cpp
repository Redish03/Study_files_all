#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
int map[1001][1001];
int sum[1001][1001][4];

int dp(int x, int y, int direc)
{
    if(x == N)
    {
        return 0;
    }

    if(sum[x][y][direc] != 99999999) // 이미 방문한 적 있는 노드 일때 (direc까지 포함하는 건 같은 방향에서 내려왔을때를 의미함.)
    {
        return sum[x][y][direc];
    }

    //왼쪽
    if(direc != 0 && y - 1 >= 0)
    {
        sum[x][y][direc] = dp(x + 1, y - 1, 0) + map[x][y];
    }

    //중간
    if(direc != 1)
    {
        sum[x][y][direc] = min(sum[x][y][direc], dp(x + 1, y, 1) + map[x][y]);
    }

    //오른쪽
    if(direc != 2 && y + 1 < M)
    {
        sum[x][y][direc] = min(sum[x][y][direc], dp(x + 1, y + 1, 2) + map[x][y]);
    }

    return sum[x][y][direc];
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> map[i][j];
            for (int k = 0; k < 4; k++)
            {
                sum[i][j][k] = 99999999;
            }
        }
    }

    int fuel = 99999999;

    for (int i = 0; i < M; i++)
    {
        //처음에는 방향이 없으므로, dir에 3을 대입.
        fuel = min(fuel, dp(0, i, 3));
    }

    cout << fuel;
}