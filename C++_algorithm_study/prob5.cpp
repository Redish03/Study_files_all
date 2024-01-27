#include <iostream>

using namespace std;

int N;
int arr[100];

bool dfs(int idx)
{
    if (idx == N)
    {
        return true;
    }
    if (idx > N)
    {
        return false;
    }

    for (int i = 1; i <= arr[idx]; i++)
    {
        if (dfs(idx + i))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }
    if (dfs(1))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}