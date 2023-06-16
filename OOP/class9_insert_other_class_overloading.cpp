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
    CCircle &operator=(const CCircle &Cir)
    {
        // ���� ������ �����ε�
        cout << "CCircle ���� ������" << endl;

        x = Cir.x;
        y = Cir.y;
        Radius = Cir.Radius;
        return (*this);
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
    CCircle Cir(2, 2, 100);
    Cir = Sph; // derived ��ü�� base ������ ����

    cout << Cir.GetArea() << endl;
    return 0;
}
