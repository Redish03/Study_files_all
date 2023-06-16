#include <iostream>

using namespace std;

template <typename T, int Radius> // 비타입 템플릿 매개변수

class CPoint
{
private:
    T x, y;

public:
    CPoint(T a = 0, T b = 0) : x(a), y(b) {}
    void Print()
    {
        cout << "(" << x << ", " << y << ")" << endl;
        cout << "반지름 : " << Radius << endl;
        // 비타입 템플릿 매개변수는 read only이다.
    }
};

int main()
{
    CPoint<int, 15> P1(3, 4);
    P1.Print();

    return 0;
}