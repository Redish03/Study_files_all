#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
bool visit[9] = {0, };
int arr[9] = {0, };

void dfs(int count)
{
    if(count == M)
    {
        for(int i = 0; i < M; i++)
        {
            if(arr[i - 1] > arr[i])
              return;
        }
        for (int i = 0; i < M; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 1; i <= N; i++)
    {
        if(!visit[i])
        {
            visit[i] = true;
            arr[count] = i;
            dfs(count + 1);
            visit[i] = false;
        }
    }
}

int main()
{
    cin >> N >> M;

    dfs(0);
}