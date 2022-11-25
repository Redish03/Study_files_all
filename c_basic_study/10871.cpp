#include <iostream>
#include <queue>
using namespace std;

#define MIN 0

int main()
{
    int N, X;
    int arr[10001];
    queue<int> q;

    cin >> N >> X;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (arr[i] < X)
        {
            q.push(arr[i]);
        }
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}