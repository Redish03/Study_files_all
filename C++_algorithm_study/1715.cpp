#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> v;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    while(v.size() != 1)
    {
        v[0] = v[0] + v[1];
        v.erase(v.begin() + 1);
        sort(v.begin(), v.end());
    }
    cout << v[0];
}
// 1 3 5
// 6 7 8

// 1 3 5
// 2 4 6