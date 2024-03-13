#include <iostream>
#include <vector>

using namespace std;

vector<vector<pair<int, int>>> tree(100001);
int max_dist = -99;
bool path[100001] = {false};

bool check_no_way(int node)
{
    for (int i = 0; i < tree[node].size(); i++)
    {
        if (!path[tree[node][i].first])
        {
            return false;
        }
    }
    return true;
}

void dfs(int node, int distance)
{
    if (check_no_way(node))
    {
        if (max_dist < distance)
        {
            max_dist = distance;
            return;
        }
    }
    for (int i = 0; i < tree[node].size(); i++)
    {
        int nnode = tree[node][i].first;
        int ndist = tree[node][i].second;
        path[nnode] = true;

        dfs(nnode, distance + ndist);
        path[nnode] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int V;
    cin >> V;
    int a, node, dist, check_fin = 0;

    for (int i = 0; i < V; i++)
    {
        cin >> a;
        cin >> check_fin;
        while (check_fin != -1)
        {
            node = check_fin;
            cin >> dist;

            tree[a].push_back({node, dist});
            cin >> check_fin;
        }
    }
    for (int i = 1; i <= V; i++)
    {
        path[i] = true;
        dfs(i, 0);
        path[i] = false;
    }

    cout << max_dist;
}