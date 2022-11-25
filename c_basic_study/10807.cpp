#include <iostream>

using namespace std;

int main()
{
    int v, N;
    int arr[101];

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cin >> v;
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (v == arr[i])
        {
            count++;
        }
    }
    cout << count;
}