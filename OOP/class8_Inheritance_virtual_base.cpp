#include <iostream>

using namespace std;

class CPointX
{
protected:
    int x;

public:
    CPointX(int a) : x(a)
    {
        cout << "CPointX 생성자" << endl;
    }
    ~CPointX()
    {
        cout << "CPointX 소멸자" << endl;
    }
    void Print()
    {
        cout << "CPointX" << endl;
    }
};

class CPointXY
{
protected:
    int y;

public:
    CPointXY(int b) : y(b)
    {
        cout << "CPointXY 생성자" << endl;
    }
    ~CPointXY()
    {
        cout << "CPointXY 소멸자" << endl;
    }
    void Print()
    {
        cout << "CPointXY" << endl;
    }
};

class CPointXZ
{
protected:
    int z;

public:
    CPointXZ(int a, int c) : z(c)
    {
        cout << "CPointXZ 생성자" << endl;
    }
    ~CPointXZ()
    {
        cout << "CPointXZ 소멸자" << endl;
    }
    void Print()
    {
        cout << "CPointXZ" << endl;
    }
};

class CPointXYZ : public CPointXY, public CPointXZ
{
private:
    int xyz;

public:
    CPointXYZ(int a, int b, int c) : CPointXY(a, b), CPointXZ(a, c)
    {
        xyz = 0;
        cout << "CPointXYZ 생성자" << endl;
    }
    ~CPointXYZ()
    {
        cout << "CPointXYZ 소멸자" << endl;
    }
    void Print()
    {
        // error: 'x' 액세스가 모호합니다.
        // cout << "x: " << x << endl;
        // CPointX::Print();  // C++ 6.0 이상에서는 에러 발생
        CPointXY::Print();
        CPointXZ::Print();
        cout << "CPointXYZ" << endl;
    }
};

int main()
{
    CPointXYZ Pxyz(1, 2, 3);
    Pxyz.Print();

    return 0;
}