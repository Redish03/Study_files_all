#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int com[101][101];
int check[101];
int node, N;
int count = 0;

void bfs(int x)
{
    queue <int> q;
    check[x] = 1;
    q.push(x);

    while(!q.empty())
    {
        node = q.front();
        q.pop();

        for(int i = 0; i <= N; i++)
        {
            if(!check[i] && com[node][i] == 1)
            {
                check[i] = true;
                q.push(i);
                count++;
            }
        }
    }
}

int main()
{
    int comnum;
    int num1, num2;
    cin >> N;
    cin >> comnum;
    for(int i = 0; i < comnum; i++)
    {
        cin >> num1 >> num2;
        com[num1][num2] = com[num1][num2] = 1;
    }
    bfs(1);
    cout << count;
}