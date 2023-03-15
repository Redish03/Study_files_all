#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M;
vector<vector<int>> v;
queue<int> q;
vector<int> trust;
int answer[200001] = {-1, };

void bfs(int start)
{
    q.push(start);

    while (!q.empty())
    {
        int cur = q.front();
        for (int i = 0; i < v[cur].size(); i++)
        {
            
        }
    }
    

}

int nearcount(int i)
{
    int cnt = 0;
    for (int j = 0; j < v[i].size(); i++)
    {
        if(trust[v[i][j]] != -1)
        {
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    cin >> N;

    int a;
    for (int i = 0; i < N; i++)
    {
        while(a != 0)
        {
            cin >> a;
            v[i].push_back(a);
            v[a].push_back(i);
        }
    }

    int M;
    for (int i = 0; i < M; i++)
    {
        cin >> a;
        trust.push_back(a);
        answer[a] = 0;
    }

    for (int i = 1; i <= N; i++)
    {
        cout << answer << ' ';
    }
}