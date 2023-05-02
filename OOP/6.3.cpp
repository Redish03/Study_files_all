#include <iostream>
using namespace std;

class CPoint
{
private:
    int x;
    int y;

public:
    CPoint() :x(0), y(0) { }
    CPoint(int a) :x(a), y(a) { }
    CPoint(int a, int b) :x(a), y(b) { }
    CPoint(int a, const CPoint &P)
    {
        x = a*P.x;
        y = a*P.y;
    }
    CPoint(const CPoint &P1, const CPoint &P2)
    {
        x = P1.x + P2.x;
        y = P1.y + P2.y;
    }
    CPoint(const CPoint &copy)
    {
        x = copy.x;
        y = copy.y;
    }
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
    CPoint P4 = P3;
    CPoint P5(2, P3);
    CPoint P6(P4, P5);
    
    P1.Print();
    P2.Print();
    P3.Print();
    P4.Print();
    P5.Print();
    P6.Print();
    return 0;
}

