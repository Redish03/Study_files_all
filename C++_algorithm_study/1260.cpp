#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

queue<int> q;
vector<int> node;
bool visit[1001] = {false};

void dfs(int v)
{
    visit[v] = true;

    cout << v << " ";

    for (int i = 0; i < node.size(); i++)
    {
        if(!visit[node[v][i]])
        {
            dfs(node[v][i]);
        }
    }

}

void bfs(int v)
{
    q.push(v);
    visit[v] = 1;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();

        cout << x << " ";
        for (int i = 0; i < node[x].size(); i++)
        {
            if(!visit[node[v][i]])
            {
                q.push(node[v][i]);
                visit[node[v][i]] = true;
            }
        }
    }
}

int main()
{
    int N, M, V, a, b;
    cin >> N >> M >> V;
    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;

        node[a].push_back(b);
        node[b].push_back(a);
    }

    for (int i = 0; i < M; i++)
    {
        sort(node[i].begin(), node[i].end());
    }

    dfs(V);
    for (int i = 0; i < N; i++)
    {
        visit[i] = false;
    }
    cout << "\n";
    bfs(V);  

}