#include <iostream>
#include <algorithm>

using namespace std;

int arr[1001] = {0, };
int dp[1001];
int N;

int solution() {
    int ans = 0;
    
    for(int i = 1; i <= N; i++) {
        dp[i] = 1;
        
        for(int j = i - 1; j >= 1; j--) {
            if(arr[j] < arr[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(dp[i], ans);
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> N;
    
    for(int i = N; i > 0; i--) {
        cin >> arr[i];
    }
    
    cout << solution();
}
