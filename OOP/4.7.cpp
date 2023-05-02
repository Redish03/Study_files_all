#include <iostream>
using namespace std;

class CPoint
{
private:
    int x;
    int y;

public:
    CPoint():x(0), y(0) { }
    CPoint(int a):x(a), y(a) { }
    CPoint(int a, int b):x(a), y(b) {}
    CPoint(int a, int b, int c):x(a+b+c), y(a*b*c){ }
    void Print()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main(void)
{
    CPoint P1;
    CPoint P2(1);
    CPoint P3(2, 3);
    CPoint P4(4, 5, 6);

    P1.Print();
    P2.Print();
    P3.Print();
    P4.Print();
    return 0;
}