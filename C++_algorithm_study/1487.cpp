#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    vector<pair<int, int>> v(N);
    
    for(int i = 0; i < N; i++) {
        cin >> v[i].first >> v[i].second;
    }
    
    sort(v.begin(), v.end());
    
    int max_sum = 0;
    int idx = 0;
    for(int i = 0; i < N; i++) {
        int cur_money = v[i].first;
        int cur_sum = 0;
        for(int j = 0; j < N; j++) {
            if(v[j].first < cur_money || cur_money - v[j].second <= 0) continue;
            cur_sum += cur_money - v[j].second;
        }
        if(cur_sum > max_sum) {
            idx = cur_money;
            max_sum = cur_sum;
        }
    }
    cout << idx;
       
    return 0;
}
