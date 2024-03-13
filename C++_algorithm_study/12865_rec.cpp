#include <iostream>
#include <vector>

using namespace std;

int N, K;
vector<pair<int, int>> items(100);
int max_enjoy = -987654321;
// int max_enjoy[100];
// first -> 무게 w, second -> 가치 v

void rec(int cur_weight, int idx, int cur_enjoy)
{
    for (int i = idx; i < N; i++)
    {
        // cur_weight구하기
        // 만약 K 보다 크다면 return
        //

        if (cur_weight <= K)
        {
            cur_weight += items[i].first;
            cur_enjoy += items[i].second;
        }
        rec(cur_weight, i, cur_enjoy);
        cur_weight -= items[i].first;
        cur_enjoy -= items[i].second;
    }
}

int main()
{
    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        cin >> items[i].first >> items[i].second;
    }

    rec(0, 0, 0);

    cout << max_enjoy;
}