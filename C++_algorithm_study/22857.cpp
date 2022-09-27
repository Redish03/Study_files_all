#include <iostream>

using namespace std;

int v[1000001];
int d[50001][101]; //[수열의 인덱스][K의 횟수]
int S, K;
int Dp(int x, int count, int length) 
{
	if (x <= 0 || count > K) return length; //범위를 벗어나면 length를 반환
	if (d[x][count] != 0) return d[x][count];

	int value = 0;
	if (v[x] % 2 == 0) value = Dp(x - 1, count, length + 1);
	else if (count < K) value = Dp(x - 1, count + 1, length);
	else if (count == K) return length; 
	return d[x][count] = value;
}
int main()
{
	cin.tie(0); 
    cout.tie(0);
    ios::sync_with_stdio(false);
	cin >> S >> K;

	for (int i = 1; i <= S; i++) {
		cin >> v[i];
	}

	int ans = 0;

	for (int i = S; i >= 1; i--)
    {
		for (int j = 0; j <= K; j++) 
        {
			if (v[i] % 2 == 0) ans = max(ans, Dp(i, j, 0));
		}
    }
	cout << ans;
}