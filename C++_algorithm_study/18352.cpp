#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int N, M, K, X;
vector<vector<int>> node;
vector<int> answer;
queue<int> q;
vector<int> check = {0};

void bfs(int x)
{
    q.push(x);
    check[x] = 1;
    int distance = 0;

    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        for (int i = 0; i < node[x].size(); i++)
        {
            int next = node[x][i];
            if(check[next] == 0)
            {
                check[next] = true;
                q.push(next);
                distance++;
            }
        }
        if(distance == K)
        {
            answer.push_back(x);
        }
    }
}

int main()
{
    cin >> N >> M >> K >> X;
    int a, b;
    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;
        node[a].push_back(b);
    }

    bfs(X);

    sort(answer.begin(), answer.end());

    if(answer.empty())
    {
        return -1;
    }
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << "\n";
    }
}