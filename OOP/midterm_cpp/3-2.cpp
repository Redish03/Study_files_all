#include <iostream>

using namespace std;

int main()
{
    int *arr = new int[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    double sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += (double)arr[i];
    }

    cout << sum / (double)5.0;
}