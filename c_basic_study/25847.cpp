#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int T;
    int a, b, c;
    cin >> T;

    while (T--)
    {
        cin >> a >> b >> c;
        cout << min({a, b, c}) << '\n';
    }
}