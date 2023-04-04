#include <iostream>

using namespace std;

int &min(int &x, int &y)
{
    return ((x < y) ? x : y);
}

int main()
{
    int a = 3, b = 4;
    min(a, b) = 5;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}