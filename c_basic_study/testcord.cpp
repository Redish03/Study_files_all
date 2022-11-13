#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    vector<int> V;
    vector<int> E;
    int sol;

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int a, b;
        cin >> a >> b;
        V.push_back(a);
        E.push_back(b);
    }

    for (int i = 0; i < T; i++)
    {
        sol = E[i] - V[i];
        cout << sol << "\n";
    }
}