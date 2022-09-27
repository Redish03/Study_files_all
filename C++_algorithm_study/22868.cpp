#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
vector <int> v[10001];
bool visit[10001];
int num[10001]; //방문한 정점의 번호(number)

int bfs(int s, int e) //s는 시작노드, e는 도착노드
{
    queue <pair<int, int>> q;
    visit[s] = true; //방문함을 true로 바꿔준다.
    q.push(make_pair(s, 0));

    while (!q.empty())
    {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();

        for(int i = 0; i < v[a].size(); i++)
        {
            if(!visit[v[a][i]])//방문한 적 없는 노드라면, 방문함으로 바꿔주고 번호를 저장해준다.
            {
                visit[v[a][i]] = true;
                num[v[a][i]] = a;
                q.push(make_pair(v[a][i], b+1));
            }
            if(v[a][i] == e) // 도착노드에 도착을 했다면, b+1의 값을 return 해준다. 
            {
                return b+1;
            }
        }

    }
    
}


int main()
{
    int N, M;
    int S, E;

    cin >> N >> M;
    for(int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    //연결된 노드의 정보들을 입력 받는다.
    for (int i = 1; i <= N; i++)
    {
        sort(v[i].begin(), v[i].end()); // 사전순 정렬
    }
    cin >> S >> E;

    int result1 = bfs(S, E);
    for(int i = 1; i <= N; i++)
    {
        visit[i] = false; // bfs를 돌린 후 다시 돌리기 위해 false처리를 해준다.
    }

    int k = num[E]; //방문했던 노드의 번호를 k에 저장
    while(k != 0)
    {
        visit[k] = true; //방문한 곳은 다시 못 들르니 true로 전환해서 방문처리
        k = num[k];
    }
    int result2 = bfs(E, S); //반대방향으로 한번 더 돌린다. 위에 한번 갔다온 곳은 포함하지 않는다.
    cout << result1 + result2;

}