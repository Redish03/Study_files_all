#include <iostream>
#include <vector>
#include <queue>
#define INF 999999999

using namespace std;

int V, E;
vector<pair<int, int>> v[300001];
int distances[20001];

void dijkstra(int start_node)
{
    for (int i = 1; i <= V; i++)
    {
        distances[i] = INF;
    }
    distances[start_node] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start_node});

    while (!pq.empty())
    {
        int cur_node = pq.top().second;
        int cur_dist = pq.top().first;

        pq.pop();

        if (distances[cur_node] < cur_dist)
            continue;
        for (int i = 0; i < v[cur_node].size(); i++)
        {
            int n_node = v[cur_node][i].first;
            int n_cost = v[cur_node][i].second;

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
    cin >> V >> E;

    int start;
    cin >> start;

    for (int i = 0; i < E; i++)
    {
        int a, b, d;
        cin >> a >> b >> d;

        v[a].push_back({b, d});
    }

    dijkstra(start);

    for (int i = 1; i <= V; i++)
    {
        if (distances[i] == INF)
        {
            cout << "INF" << '\n';
            continue;
        }
        cout << distances[i] << '\n';
    }
}