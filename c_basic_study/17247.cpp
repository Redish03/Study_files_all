#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    int maps[1001][1001];
    vector<pair<int, int>> dir;

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> maps[i][j];
            if(maps[i][j] == 1)
            {
                dir.push_back(make_pair(i, j));
            }
        }
    }
    int X = dir[0].first - dir[1].first;
    int Y = dir[0].second - dir[1].second;

    if(X < 0) X = X * (-1);
    if(Y < 0) Y = Y * (-1);

    cout << X + Y;
}