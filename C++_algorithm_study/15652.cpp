#include <iostream>

using namespace std;

int N, M;
int arr[10];

void BackTrack(int num, int count_)
{
    if (count_ == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = num; i <= N; i++)
    {
        arr[count_] = i;
        BackTrack(i, count_ + 1);
    }
}

int main()
{
    cin >> N >> M;

    BackTrack(1, 0);
}