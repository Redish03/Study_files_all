#include <iostream>
#include <algorithm>

using namespace std;

int count_ = 0;
int arr[21];
int N, S;

void partSet(int sum, int idx)
{
    if (idx == N)
        return;
    if (sum + arr[idx] == S)
    {
        count_++;
    }
    partSet(sum, idx + 1);
    partSet(sum + arr[idx], idx + 1);
}

int main()
{
    cin >> N >> S;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    partSet(0, 0);
    cout << count_;
}