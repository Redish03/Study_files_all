#include <iostream>

using namespace std;
template <typename T = int> // 디폴트 템플릿 매개변수

class CPoint
{
private:
    T x, y;

public:
    CPoint(T a = 0, T b = 0) : x(a), y(b) {}
    void Print()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    CPoint<> P1(1, 2);
    P1.Print();
}