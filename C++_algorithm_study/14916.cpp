#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int count = 0;
    
    if(N == 1 || N == 3)
    {
        cout << -1;
        return 0;
    }

    if(N % 5 == 0)
    {
        count = N / 5;
    }
    else if(N % 5 == 4 || N % 5 == 2)
    {
        if(N % 5 == 4)
        {
            count = N / 5 + 2;
        }
        else
        {
            count = N / 5 + 1;
        }
    }
    else
    {
        if(N % 5 == 1)
        {
            count = (N / 5) + 2;
        }
        else
        {
            count = (N / 5) + 3;
        }
    }
    cout << count;
    return 0;
}