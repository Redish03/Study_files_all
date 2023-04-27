#include <iostream>

using namespace std;

int main()
{
    int x0, N;
    int height;

    cin >> x0 >> N;
    height = x0;
    for (int i = 0; i < N; i++)
    {
        if(height % 2 == 1)
        {
            height = (2 * height) ^ 6;
        }
        else
        {
            height = (height / 2) ^ 6;
        }
    }
    cout << height;
}
