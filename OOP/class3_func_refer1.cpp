#include <iostream>

using namespace std;

int sum(int x, int y) 
{
    return (x + y);
}

int main()
{
    int (*pSum)(int, int);
    pSum = sum;

    cout << pSum(3, 4);
}