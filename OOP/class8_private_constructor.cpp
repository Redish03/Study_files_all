#include <iostream>

using namespace std;

class CPoint
{
private:
    int x, y;
    CPoint(int a, int b) : x(a), y(b) {}
    CPoint()
    {
        if (OnlyPoint != NULL)
            delete OnlyPoint;
    }
    static CPoint *OnlyPoint;

public:
    static CPoint *GetPoint()
    {
        if (OnlyPoint == NULL)
        {
            OnlyPoint = new CPoint(3, 4);
        }
        return OnlyPoint;
    }
    void Print()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

CPoint *CPoint::OnlyPoint = NULL; // 초기화, 객체 생성 전

int main()
{
    CPoint::GetPoint()->Print();
    return 0;
}