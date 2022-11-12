#include <iostream>

using namespace std;

int n, m;
int combin = 1;

int dp(int x, int y)
{
    for(int i = 0; i < y; i++)
    {
        combin *= x;
        x--;
    }
    
    return 0;
}

int main()
{
    cin >> n >> m;

    cout << dp(n, m);
}