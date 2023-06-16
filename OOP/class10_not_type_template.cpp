#include <iostream>

using namespace std;

template <typename T, int Radius> // ��Ÿ�� ���ø� �Ű�����

class CPoint
{
private:
    T x, y;

public:
    CPoint(T a = 0, T b = 0) : x(a), y(b) {}
    void Print()
    {
        cout << "(" << x << ", " << y << ")" << endl;
        cout << "������ : " << Radius << endl;
        // ��Ÿ�� ���ø� �Ű������� read only�̴�.
    }
};

int main()
{
    CPoint<int, 15> P1(3, 4);
    P1.Print();

    return 0;
}