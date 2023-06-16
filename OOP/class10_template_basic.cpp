#include <iostream>

using namespace std;

template <typename T>
T Sum(T a, T b)
{
    T c = a + b;
    return c;
}

class CPoint
{
private:
    int x, y;

public:
    CPoint(int a, int b) : x(a), y(b) {}
    CPoint operator+(CPoint &Po)
    {
        return CPoint(x + Po.x, y + Po.y);
    }
    void Print()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    CPoint P1(1, 2), P2(3, 4);
    CPoint P3 = Sum(P1, P2);
    P3.Print();
    return 0;
}