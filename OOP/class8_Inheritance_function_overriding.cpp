#include <iostream>
#define PI 3.14

using namespace std;

class CCircle
{
protected:
    int x, y;
    double Radius;

public:
    CCircle(int a, int b, double r) : x(a), y(b), Radius(r)
    {
        cout << "CCircle ������" << endl;
    }
    ~CCircle()
    {
        cout << "CCircle �Ҹ���" << endl;
    }
    double GetArea()
    {
        return (PI * Radius * Radius);
    }
};

class CSphere : public CCircle
{
private:
    int z;

public:
    CSphere(int a, int b, int c, double r) : CCircle(a, b, r), z(c)
    {
        cout << "CSphere ������" << endl;
    }
    ~CSphere()
    {
        cout << "CSphere �Ҹ���" << endl;
    }
    double GetArea()
    {
        return (4 * PI * Radius * Radius);
    }
    double GetVolume()
    {
        return ((4.0 / 3.0) * PI * Radius * Radius * Radius);
    }
};

int main()
{
    CSphere Sph(1, 1, 1, 1);

    cout << Sph.GetArea() << endl;
    cout << Sph.GetVolume() << endl;

    return 0;
}