#include <iostream>
#include <vector>

using namespace std;

vector<bool> arr(20, false);

int main()
{
    ios_base::sync_with_stdio(0);

    cin.tie(0);
    cout.tie(0);
    int M;

    cin >> M;
    string com;
    for (int i = 0; i < M; i++)
    {
        cin >> com;
        if (com == "add")
        {
            int a;
            cin >> a;

            arr[a - 1] = true;
        }
        else if (com == "remove")
        {
            int a;
            cin >> a;

            arr[a - 1] = false;
        }
        else if (com == "check")
        {
            int a;
            cin >> a;

            if (arr[a - 1])
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if (com == "toggle")
        {
            int a;
            cin >> a;

            if (arr[a - 1])
            {
                arr[a - 1] = false;
            }
            else
            {
                arr[a - 1] = true;
            }
        }
        else if (com == "all")
        {
            arr.assign(20, true);
        }
        else if (com == "empty")
        {
            arr.assign(20, false);
        }
        else
        {
            continue;
        }
    }
}