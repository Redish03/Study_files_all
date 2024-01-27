#include <iostream>
#include <queue>

using namespace std;

int N;
priority_queue<pair<int, int>> pq;

int main()
{
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int num, startTime, endTime;
        cin >> num >> startTime >> endTime;

        pq.push({startTime, endTime});
    }
}