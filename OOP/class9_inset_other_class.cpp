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
    CSphere(int a, int b, int c, double r) : CCircle(a, b, r), z(c) {}
    double getArea()
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
    CCircle &Cir = Sph; // derived 객체를 base 참조로 대입

    cout << "표면적" << Cir.GetArea() << endl;
    return 0;
}
