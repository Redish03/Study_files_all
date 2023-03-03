#include <iostream>

#define MAX 99999999

using namespace std;
int N;
int arr[11];
int idx[4];
int m = MAX;
int M = -MAX;

void func(int result, int count)
{
    if(count == N - 1)
    {
        if(m > result) m = result;
        if(M < result) M = result;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        if(idx[i] == 0) continue;
        idx[i]--;

        if(i == 0)
        {
            func(result + arr[count + 1], count + 1);
        }
        else if(i == 1)
        {
            func(result - arr[count + 1], count + 1);
        }
        else if(i == 2)
        {
            func(result * arr[count + 1], count + 1);
        }
        else
        {
            func(result / arr[count + 1], count + 1);
        }

        idx[i]++;
    }
}

int main()
{
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cin >> idx[i];
    }

    func(arr[0], 0);

    cout << M << '\n' << m << '\n';
}