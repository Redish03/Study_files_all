#include <iostream>

using namespace std;

void SumMultiply(int *arr, int len, int &sum, int &multiply)
{
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
        multiply *= arr[i];
    }
}

int main(void)
{
    int arr[5];
    int sum=0, multiply=1;
    
    for (int i = 0; i < 5; i++)
    {
        arr[i] = (i + 1);
    }

    SumMultiply(arr, sizeof(arr) / sizeof(int), sum, multiply);

    cout << "합:" << sum << endl << "곱:" << multiply << endl;

    return 0;
}