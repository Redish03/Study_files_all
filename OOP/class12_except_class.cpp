#include <iostream>

using namespace std;

class CMyException
{
public:
    virtual void What() = 0; // 추상 클래스로 만듬, base클래스 역할만.
};

class CDivideZero : public CMyException
{
public:
    void What()
    {
        cout << "0으로 나눌 수 없습니다." << endl;
    }
};

class CNegativeNumber : public CMyException
{
public:
    void What()
    {
        cout << "x와 y는 음수가 될 수 없습니다." << endl;
    }
};

int main()
{
    int x, y;
    cout << "2개의 정수 입력 : ";
    cin >> x >> y;

    try
    {
        if (y == 0)
            throw CDivideZero(); // CDividedZero 임시 객체 전달
        if (x <= 0 || y <= 0)
            throw CNegativeNumber(); // CNegativeNumber 임시 객체 전달
        cout << "+ : " << x + y << endl;
        cout << "- : " << x - y << endl;
        cout << "* : " << x * y << endl;
        cout << "/ : " << x / y << endl;
    }
    catch (CMyException &a)
    {
        a.What();
    }
    catch (...)
    {
        cout << "모든 throw문을 수용할 수 있는 예외 처리 핸들러 입닌다." << endl;
    }
    cout << "사칙 연산 종료" << endl;
}