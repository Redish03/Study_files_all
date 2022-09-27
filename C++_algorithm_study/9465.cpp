#include <iostream>

using namespace std;

int max_num[100001][2];
int arr[100001][2];

int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int T;
    cin >> T;

    while(T--)
    {
        int n;

        cin >> n;
        for(int i = 0; i <= n; i++)
            for(int j = 0; j < 2; j++)
            {
                max_num[i][j] = 0;
            }
        for(int i = 1; i<= n; i++) cin >> arr[i][0];
        for(int i = 1; i<= n; i++) cin >> arr[i][1];

        max_num[1][0] = arr[1][0];
        max_num[1][1] = arr[1][1];
        int ans = max(max_num[1][0],max_num[1][1]);
        for(int i = 2; i <= n; i++){
            max_num[i][0] = max(max_num[i-1][1],max_num[i-2][1]) + arr[i][0];
            max_num[i][1] = max(max_num[i-1][0],max_num[i-2][0]) + arr[i][1];
            int value = max(max_num[i][0], max_num[i][1]);
            ans = max(ans,value);
        }
        cout << ans << "\n";
    }
}
/*
시작점은 무조건 [0][0]이나 [1][0]중 하나이다.
(1) 대각선으로 바로가는 경우.
(2) 대각선으로 가지만 가운데 한탄을 띄우고 대각선으로 가는 경우.

결국 경우의 수는 네가지가 될 것. 
두가지를 비교해서 큰 값을 뽑아내고, 0과 1의 각각의 가지에서 나오는 최대값을 최종적으로 비교한다.
dp[0][i] = buf[0][i] + max(dp[1][i-1], dp[1][i-2]);
dp[1][i] = buf[1][i] + max(dp[0][i-1], dp[0][i-2]);

result = max(dp[0][i], dp[1][i]);

*/