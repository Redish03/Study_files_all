#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int N, K, S, X, Y;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
int map[201][201];
bool check[201][201];

int main()
{
    cin >> N >> K;

    queue<pair<int, pair<int, int>>> virus;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> map[i][j];
            if (map[i][j] != 0)
            {
                virus.push_back({map[i][j], {i, j}}); //{ 바이러스 번호, {좌표 y값, 좌표 x값}}
                check[i][j] = 1;
            }
            else
            {
                check[i][j] = 0;
            }
        }
    }
    cin >> S >> Y >> X;

    sort(virus.begin(), virus.end());
    int cur_time = 0;
    while (!q.empty() || cur_time < S)
    {
        int vircount = virus.size();

        for (int i = 0; i < vircount; i++)
        {
            int cur_vir = virus[i].first;
            int cur_y = virus[i].second.first;
            int cur_x = virus[i].second.second;

            for (int j = 0; j < 4; j++)
            {
                int ny = cur_y + dy[j];
                int nx = cur_x + dx[j];

                if (check[ny][nx]) //방문한 상태라면
                {
                    continue;
                }
                if (1 > ny || ny > N || 1 > nx || nx > N) // 맵 밖을 벗어났다면 
                {
                    continue;
                }
                map[ny][nx] = cur_vir;                // 맵에 현재 바이러스를 넣어준다.
                virus.push_back({cur_vir, {ny, nx}}); //현재 바이러스 번호와 위치를 벡터에 넣는다.
            }
            virus.pop();
        }
        if (map[Y][X]) //만약 구할 곳의 좌표에 값이 있다면 반복문을 벗어난다.
        {
            break;
        }
        cur_time++;
    }

    cout << map[Y][X] << "\n";
}
