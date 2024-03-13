#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> v;
vector<bool> visited(10001, false);

void dfs() {
    
}

int main()
{
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs();
}