#include <iostream>
#include <algorithm>

using namespace std;

int N;
int arr[1000001];

inline bool triangleEnable(int a, int b, int c)
{
    if (a >= b + c)
        return false;

    return true;
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    int sum = -1;
    for (int i = N - 1; i >= 2; i--)
    {
        if (triangleEnable(arr[i], arr[i - 1], arr[i - 2]))
        {
            sum = arr[i] + arr[i - 1] + arr[i - 2];
            break;
        }
    }
    cout << sum;
}