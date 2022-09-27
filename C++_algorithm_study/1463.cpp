#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector <int> v (10000001, 0);
int N;
#define MAX 100000

int dp(int x)
{
    int a = MAX, b = MAX, c = MAX; //0으로 입력하면 min돌릴때 0으로 나오기 때문에
    if(x == 1) return 0;
    if(x == 2) return 1;
    if(x == 3) return 1;
    if(v[x] != 0) return v[x];
    
    if (x % 3 == 0)
    {
        a =  dp(x / 3) + 1 ;    
    }
    if (x % 2 == 0)
    {
        b = dp(x / 2) + 1;
    }
    if(true)
    {
        c = dp(x - 1) + 1;
    }
    v[x] = min({a, b, c});
    return min({a, b, c});
}

int main()
{
    cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

    cin >> N;

    cout << dp(N);
}
