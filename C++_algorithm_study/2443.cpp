#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int max_len = 2 * N - 1;

    for (int i = max_len; i > 0; i = i - 2)
    {
        for (int j = 0; j < (max_len - i) / 2; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}