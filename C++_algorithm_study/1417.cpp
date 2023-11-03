#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int N, Dasom;
    int answer = 0;
    priority_queue<int> candidator;

    cin >> N;
    cin >> Dasom;

    for (int i = 0; i < N - 1; i++)
    {
        int voter;
        cin >> voter;
        candidator.push(voter);
    }

    while (!candidator.empty() && candidator.top() >= Dasom)
    {
        int most_candidator = candidator.top();
        candidator.pop();
        most_candidator--;
        candidator.push(most_candidator);
        Dasom++;
        answer++;
    }
    cout << answer;
}