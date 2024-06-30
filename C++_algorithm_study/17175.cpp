#include<iostream>

using namespace std;

long long dp[32] = {0, };

long long fib(int n) {
    if(dp[n] != 0) return dp[n];
    if(n == 0) return 1;
    if(n == 1) return 1;
    if(n == 2) return 3;
    
    dp[n] = fib(n - 1) + fib(n - 2) + 1;
    return dp[n];
}

int main()
{
    int N;
    cin >> N;
    cout << fib(N) % 1000000007;
}
