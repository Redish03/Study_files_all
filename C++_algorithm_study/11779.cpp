#include <iostream>
#include <queue>
#include <vector>
#define INF 999999999

using namespace std;

int N, M;
vector<pair<int, int>> v[100001];
int start_point, end_point;
int distances[1001];
vector<int> path[1001];

void dijkstra()
{
    for (int i = 1; i <= N; i++)
    {
        distances[i] = INF;
    }
    distances[start_point] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start_point});
    path[end_point].push_back(start_point);

    while (!pq.empty())
    {
        int cur_node = pq.top().second;
        int cur_dist = pq.top().first;

        pq.pop();

        if (distances[cur_node] < cur_dist)
            continue;
        for (int i = 0; i < v[cur_node].size(); i++)
        {
            int n_node = v[cur_node][i].second;
            int n_cost = v[cur_node][i].first;

            if (cur_dist + n_cost < distances[n_node])
            {
                distances[n_node] = cur_dist + n_cost;
                pq.push({cur_dist + n_cost, n_node});

            }
        }
    }
}

int main()
{
    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        int a, b, d;
        cin >> a >> b >> d;

        v[a].push_back({b, d});
        v[b].push_back({a, d});
    }

    cin >> start_point >> end_point;

    dijkstra();

    cout << distances[end_point] << '\n';
    cout << path[end_point].size() << '\n';
    for (int i = 0; i < path[end_point].size(); i++)
    {
        cout << path[end_point][i] << ' ';
    }
}