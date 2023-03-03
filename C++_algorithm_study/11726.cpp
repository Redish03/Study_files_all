#include <iostream>

using namespace std;

long long arr[1001] = {0};

long long dp(int x)
{
    if(arr[x] != 0) return arr[x];
    if(x == 1) return 1;
    if(x == 2) return 2;
    if(x == 3) return 3;
    if(x == 4) return 5;

    arr[x] = (dp(x - 1) + dp(x - 2)) % 10007;
    return arr[x];
}

int main()
{
    int N;
    cin >> N;

    long long answer = dp(N);
    
    cout << answer;
}

// 조합? 시간초과? Combination?