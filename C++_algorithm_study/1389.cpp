#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N, M;
vector<int> arr[5000];
queue<int> q;
vector<bool> visited(100, false);

int bfs(int start)
{
    q.push(start);

    int bacon_num = 0;
    int cnt = 1;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        for (int i = 0; i < arr[x].size(); i++)
        {
            int nx = arr[x][i];

            if (visited[nx])
            {
                continue;
            }
            visited[nx] = true;
            bacon_num += cnt;
            q.push(nx);
        }
        cnt++;
    }

    fill(visited.begin(), visited.end(), false);

    return bacon_num;
}

int main()
{
    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;

        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    int idx = 0, min_bacon_num = 987654321;
    for (int i = 1; i <= N; i++)
    {
        int BFS_num = bfs(i);
        if (min_bacon_num > BFS_num)
        {
            idx = i;
            min_bacon_num = BFS_num;
        }
    }

    cout << idx;
}