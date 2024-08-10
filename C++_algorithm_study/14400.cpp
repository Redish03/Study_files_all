#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

bool cmp(pair<int, int> &l, pair<int, int> &r) { return l.second < r.second; }
int N;
vector<pair<int, int>> v;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    
    sort(v.begin(), v.end());
    int l = v[(N - 1) / 2].first;
    sort(v.begin(), v.end(), cmp);
    int r = v[(N - 1) / 2].second;
    long long ans = 0;
    for(int i = 0; i < N; i++){
        ans += abs(l - v[i].first) + abs(r - v[i].second);
    }
    
    cout << ans;
    return 0;
}
