#include <iostream>
#include <algorithm>

using namespace std;

int N;
int arr[100001][3];

int calc_max()
{
    int max_arr[100001][3];

    max_arr[0][0] = arr[0][0];
    max_arr[0][1] = arr[0][1];
    max_arr[0][2] = arr[0][2];

    for (int i = 1; i < N; i++)
    {
        max_arr[i][0] = arr[i][0] + max(max_arr[i - 1][0], max_arr[i - 1][1]);
        max_arr[i][1] = arr[i][1] + max(max_arr[i - 1][0], max(max_arr[i - 1][1], max_arr[i - 1][2]));
        max_arr[i][2] = arr[i][2] + max(max_arr[i - 1][1], max_arr[i - 1][2]);
    }

    return max(max_arr[N - 1][0], max(max_arr[N - 1][1], max_arr[N - 1][2]));
}

int calc_min()
{
    int min_arr[100001][3];

    min_arr[0][0] = arr[0][0];
    min_arr[0][1] = arr[0][1];
    min_arr[0][2] = arr[0][2];

    for (int i = 1; i < N; i++)
    {
        min_arr[i][0] = arr[i][0] + min(min_arr[i - 1][0], min_arr[i - 1][1]);
        min_arr[i][1] = arr[i][1] + min(min_arr[i - 1][0], min(min_arr[i - 1][1], min_arr[i - 1][2]));
        min_arr[i][2] = arr[i][2] + min(min_arr[i - 1][1], min_arr[i - 1][2]);
    }

    return min(min_arr[N - 1][0], min(min_arr[N - 1][1], min_arr[N - 1][2]));
}

int main()
{
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << calc_max() << ' ' << calc_min();

    // 최소와 최대를 같이 pair로?
    // 최소, 최대 각각?
}