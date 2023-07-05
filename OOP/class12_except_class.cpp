#include <iostream>

using namespace std;

class CMyException
{
public:
    virtual void What() = 0; // �߻� Ŭ������ ����, baseŬ���� ���Ҹ�.
};

class CDivideZero : public CMyException
{
public:
    void What()
    {
        cout << "0���� ���� �� �����ϴ�." << endl;
    }
};

class CNegativeNumber : public CMyException
{
public:
    void What()
    {
        cout << "x�� y�� ������ �� �� �����ϴ�." << endl;
    }
};

int main()
{
    int x, y;
    cout << "2���� ���� �Է� : ";
    cin >> x >> y;

    try
    {
        if (y == 0)
            throw CDivideZero(); // CDividedZero �ӽ� ��ü ����
        if (x <= 0 || y <= 0)
            throw CNegativeNumber(); // CNegativeNumber �ӽ� ��ü ����
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
        cout << "��� throw���� ������ �� �ִ� ���� ó�� �ڵ鷯 �ԴѴ�." << endl;
    }
    cout << "��Ģ ���� ����" << endl;
}