#include <iostream>
#include <algorithm>

using namespace std;

int N;
int arr[5001];

int cross(int ini, int end)
{
    int mini = -1;
    for (int i = ini - 1; i < N; i++)
    {
        mini = min(mini, cross(end, i));
    }
    return mini;
}

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int answer = 0;
    answer =  cross(0, 0);
    cout << answer;
}