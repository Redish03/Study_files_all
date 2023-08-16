#include <iostream>
#include <queue>

using namespace std;

int N, M;
vector<vector<int>> v[101];
queue<int> q;
bool visited[101][5001] = {
    false,
};
vector<int> Min;
int Min_2;
int min_s;
int Min_i = 99999999;
int count = 1;

void bfs(int n)
{
    q.push(n);
    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        for (int i = 0; i < v[x].size(); i++)
        {
            if (visited[x][i])
                continue;
            q.push(i);
            min_s += count;
        }
        count++;
    }
    Min.push_back(min_s);
}

int main()
{
    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        int a, b;

        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 0; i < N; i++)
    {
        bfs(i);
    }

    for (int i = 0; i < Min.size(); i++)
    {
        if (Min_2 > Min[i])
        {
            Min_2 = Min[i];
            Min_i = i;
        }
    }
}