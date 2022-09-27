#include <iostream>

using namespace std;

int d[12];

int main()
{
    int N;
    cin >> N;

    cout << dp(N);
}

int dp(int x)
{
    if(x == 1) return 1;
    if(x == 2) return 2;
    if(x == 3) return 4;
    if(d[x] != 0) return d[x];


}