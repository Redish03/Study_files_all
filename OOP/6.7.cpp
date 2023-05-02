#include <iostream>

using namespace std;

class CPoint
{
private:
    int x;
    int y;

public:
    CPoint(int a=0, int b=0) :x(a), y(b) { }

    CPoint(const CPoint &Po)
    {
        x = Po.x;
        y = Po.y;
    }
    int GetX()
    {
        return x;
    }
    int GetY()
    {
        return y;
    }
    void Print()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

CPoint Sum(CPoint P1, CPoint P2)
{
    CPoint P3(P1.GetX() + P2.GetY(), P1.GetY() + P2.GetY());
    return P3;
}

CPoint Sub(CPoint P1, CPoint P2)
{
    CPoint P3(P1.GetX() - P2.GetX(), P1.GetY() - P2.GetY());
    return P3;
}

int main(void)
{
    CPoint P1(1, 2);
    CPoint P2(3, 4);
    CPoint P3 = Sum(P1, P2);
    CPoint P4 = Sub(P1, P2);

    P1.Print();
    P2.Print();
    P3.Print();
    P4.Print();
    return 0;
}

