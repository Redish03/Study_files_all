#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    x = temp;
}

int main()
{
    int a = 3, b = 4;
    swap(a, b);

    cout << "a = " << a << '\n';
    cout << "b = " << b << '\n';
}