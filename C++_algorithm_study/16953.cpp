#include <iostream>

using namespace std;

int greedy(long long a, long long b)
{
    int count = 1;
    while (b > a)
    {
        if(b % 10 == 1)
        {
            b = b / 10;
        }
        else if(b % 2 == 1)
        {
            return -1;
        }
        else
        {
            b = b / 2;
        }
        count++;
    }
    if(a == b) return count;
    return -1;
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
    long long A, B;
    cin >> A >> B;

    cout << greedy(A, B);
}