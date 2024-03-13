#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<pair<int, bool>, vector<pair<int, bool>>, greater<pair<int, bool>>> pq;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;

        if (a < 0)
        {
            pq.push({a * -1, false});
            continue;
        }
        else if (a == 0)
        {
            if (pq.empty())
            {
                cout << 0 << '\n';
            }
            else if (!pq.top().second)
            {
                cout << pq.top().first * -1 << '\n';
                pq.pop();
            }
            else
            {
                cout << pq.top().first << '\n';
                pq.pop();
            }
        }
        else
        {
            pq.push({a, true});
        }
    }
}