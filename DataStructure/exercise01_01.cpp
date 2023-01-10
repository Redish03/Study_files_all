#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;
    while (N > 0)
    {
        N = N / 2;
        cout << N << " ";
    }
}