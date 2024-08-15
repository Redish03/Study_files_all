#include<iostream>

using namespace std;

int N;
int dp[17][17][3];
int arr[17][17];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N; 
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }    
    }
    
    dp[0][1][0] = 1;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(i == 0 && j <= 1 || arr[i][j] == 1) continue;
            
            if(j != 0) {
                dp[i][j][0] = dp[i][j - 1][0] + dp[i][j - 1][2];
            }
            if(i != 0) {
                dp[i][j][1] = dp[i - 1][j][2] + dp[i - 1][j][1];
            }
            if(i > 0 && j > 0 && arr[i - 1][j] != 1 && arr[i][j - 1] != 1) {
                dp[i][j][2] = dp[i - 1][j - 1][0] + dp[i - 1][j - 1][1] + dp[i - 1][j - 1][2];
            }
        }
    }
    int result = dp[N - 1][N - 1][0] + dp[N - 1][N - 1][1] + dp[N - 1][N - 1][2];
    cout << result;
}
