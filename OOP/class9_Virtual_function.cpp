#include <iostream>
#define PI 3.14

using namespace std;

class CCircle
{
protected:
    int x, y;
    double Radius;

public:
    CCircle(int a, int b, double r) : x(a), y(b), Radius(r) {}
    virtual double GetArea()
    {
        return (PI * Radius * Radius);
        // 가상함수
    }
};

class CSphere : public CCircle
{
private:
    int z;

public:
    CSphere(int a, int b, int c, double r) : CCircle(a, b, r), z(c) {}
    virtual double GetArea()
    {
        return (4 * PI * Radius * Radius);
    }

    double GetVolume()
    {
        return ((4.0 / 3.0) * PI * Radius * Radius * Radius * z);
    }
};

void PrintArea(CCircle &Cir)
{
    cout << "면적 : " << Cir.GetArea() << endl;
}

int main()
{
    CCircle Cir(1, 1, 1);
    CSphere Sph(1, 1, 1, 1);

    PrintArea(Cir);
    PrintArea(Sph);

    return 0;
}