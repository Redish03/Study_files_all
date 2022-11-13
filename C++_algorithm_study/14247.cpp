#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> cur;
vector<pair<int, int>> v;

long long Cal()
{
    long long count = 0;

    for (int i = 0; i < N; i++)
    {
        count += v[i].second + (v[i].first * i);
        // v[i].second = 0;
    }
    return count;
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        cur.push_back(a);
    }
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        v.push_back(pair<int, int>(a, cur[i]));
    }

    sort(v.begin(), v.end());

    long long ans = Cal();
    cout << ans;
}