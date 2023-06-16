#include <iostream>

using namespace std;

template <typename T1, typename T2, typename T3>

void Print(T1 a, T2 b, T3 c)
{
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}

int main()
{
    Print(1, 1, 1.1);      // (T1, T2, T3) -> (int, int, double)로 대체
    Print(2, 2.2, 'a');    // (T1, T2, T3) -> (int, double, char)로 대체
    Print("test", 3, 3.3); // (T1, T2, T3) -> (char *, int, double)로 대체

    return 0;
}