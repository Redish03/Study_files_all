#include <iostream>

using namespace std;

int N;

int number_cnt = 0;
int num_cnt_arr[] = {1, 2, 2, 2, 2, 2, 2, 2, 2, 1};

void dfs(int count, int prev_num)
{
    if (count == N || prev_num < 0 || prev_num > 9)
    {
        return;
    }

    number_cnt += num_cnt_arr[prev_num];
    dfs(count + 1, prev_num - 1);
    dfs(count + 1, prev_num + 1);
}

int main()
{
    cin >> N;
    if (N == 1)
    {
        cout << 9;
        return 0;
    }
    for (int i = 1; i <= 9; i++)
    {
        dfs(1, i);
    }

    cout << number_cnt;
}