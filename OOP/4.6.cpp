#include <iostream>

using namespace std;

class CPoint
{
private:
    int x;
    int y;

public:
    CPoint() //매개변수 없을 떄
    {
        x = 0;
        y = 0;
    }
    CPoint(int a) //하나일 때
    {
        x = a;
        y = a;
    }
    CPoint(int a, int b) //두개일 떄
    {
        x = a;
        y = b;
    }
    CPoint(int a, int b, int c) //세개일 때
    {
        x = a + b + c;
        y = a*b*c;
    }
    void Print()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
    //디폴트 소멸자
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