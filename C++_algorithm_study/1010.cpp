#include <iostream>

using namespace std;

int N, M;

long long Combination()
{
    long long ans = 1;
    int m = M;
    for (int cnt = N; cnt > 0; cnt--)
    {
        ans *= m;
        m--;
    }
    for (int i = N; i > 0; i--)
    {
        ans /= i;
    }
    return ans;
}

int main()
{
    int count;
    long long answwer;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> N >> M;
        cout << Combination() << "\n";
    }
}
// 겹치는 경우를 생각하지 않은..흠
/*
4  7이 들어올때를 생각해보자.
4 -> 1
-



*/