#include <iostream>

using namespace std;

class CPointX
{
protected:
    int x;
    int a;

public:
    CPointX(int a) : x(a)
    {
        cout << "CPointX ������" << endl;
    }
    ~CPointX()
    {
        cout << "CPointX �Ҹ���" << endl;
    }
    void Print()
    {
        cout << "CPointX" << endl;
    }
};

class CPointY
{
protected:
    int y;
    int a;

public:
    CPointY(int b) : y(b)
    {
        cout << "CPointY ������" << endl;
    }
    ~CPointY()
    {
        cout << "CPointY �Ҹ���" << endl;
    }
    void Print()
    {
        cout << "CPointY" << endl;
    }
};

class CPointXYZ : public CPointX, public CPointY
{
private:
    int z;

public:
    CPointXYZ(int a, int b, int c) : CPointX(a), CPointY(b), z(c)
    {
        cout << "CPointXYZ ������" << endl;
    }
    ~CPointXYZ()
    {
        cout << "CPointXYZ �Ҹ���" << endl;
    }
    void Print()
    {
        CPointX::Print();
        CPointY::Print();
        cout << "CPointXYZ" << endl;
    }
};

int main()
{
    CPointXYZ Pxyz(1, 2, 3);
    Pxyz.Print();

    return 0;
}