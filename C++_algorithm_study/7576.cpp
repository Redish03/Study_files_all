#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N, M;
int arr[1001][1001];
bool visited[1001][1001];
vector<int> check_0;
queue<int> q;

int bfs()
{
    
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == 1 || arr[i][j] == -1)
            {
                check_0.push_back(0);
            }
        }
    }

    int day = 0;

    while(1)
    {
        
    }
    cout << day;
    return 0;
}

/*
bfs를 돌리는데 하루 지날때마다 해도 되나,,,

*/