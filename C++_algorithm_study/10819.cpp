#include <iostream>
#include <cmath>

using namespace std;

int N;
int arr[9];
int Max = -999999;

int calc()
{
    int calcSum = 0;

    for (int i = 0; i < N - 1; i++)
    {
        calcSum = abs(arr[i] + arr[i + 1]);
    }
}

void rec()
{
}

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
}