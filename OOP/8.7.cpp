#include <iostream>

using namespace std;

class CPoint

{

private:
    int x, y;

    CPoint(int a, int b) : x(a), y(b)

    {
    }

    static CPoint *OnlyPoint; // 유일한 CPoint 객체를 가리킬 포인터

public:
    // 여기서부터 추가

    static CPoint GetPoint(int a, int b)

    {

        if (OnlyPoint != NULL)

        {

            delete OnlyPoint; // 존재할경우 delete를 해야한다

            OnlyPoint = new CPoint(a, b);
        }

        else

            OnlyPoint = new CPoint(a, b);

        return *OnlyPoint;
    }

    void Print()

    {

        cout << "(" << x << ", " << y << ")" << endl;
    }
};

CPoint *CPoint::OnlyPoint = NULL;

int main(void)

{

    CPoint P1 = CPoint::GetPoint(1, 2);

    CPoint P2 = CPoint::GetPoint(3, 4);

    P1.Print();

    P2.Print();

    return 0;
}