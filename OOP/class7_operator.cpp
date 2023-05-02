#include <iostream>

using namespace std;

class CPoint {
    private:
        int x, y;

    public:
    CPoint(int a = 0, int b = 0) : x(a), y(b){ }
    CPoint operator+(const CPoint &Po) { return CPoint(x + Po.x, y + Po.y); }
    void Print() { cout << x << " " << y << endl; }
}

int main()
{
    CPoint P1(1, 1);
    CPoint P2(2, 2);
    CPoint P3 = P1 + P2;

    // 명시적 호출 : P1.operator+(P2);
    P3.Print();
    return 0;
}