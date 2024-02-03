#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int N;
    cin >> N;
    string com;
    queue<int> q;

    for (int i = 0; i < N; i++)
    {
        cin >> com;

        if (com == "push")
        {
            int x;
            cin >> x;
            q.push(x);
        }
        else if (com == "pop")
        {
            if (q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (com == "size")
        {
            cout << q.size() << '\n';
        }
        else if (com == "empty")
        {
            cout << q.empty() << '\n';
        }
        else if (com == "front")
        {
            if (q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << q.front() << '\n';
            }
        }
        else
        {
            if (q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << q.back() << '\n';
            }
        }
    }
}