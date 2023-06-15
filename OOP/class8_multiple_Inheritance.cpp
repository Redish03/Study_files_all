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
        cout << "CPointX 持失切" << endl;
    }
    ~CPointX()
    {
        cout << "CPointX 社瑚切" << endl;
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
        cout << "CPointY 持失切" << endl;
    }
    ~CPointY()
    {
        cout << "CPointY 社瑚切" << endl;
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
        cout << "CPointXYZ 持失切" << endl;
    }
    ~CPointXYZ()
    {
        cout << "CPointXYZ 社瑚切" << endl;
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