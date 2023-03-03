#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }

    for (int i = N - 1; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}