#include <iostream>
#define PI 3.14

using namespace std;

class CCircle
{
protected:
    int x, y;
    double Radius;

public:
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
    CSphere(int a, int b, int c, double r)
    {
        x = a;
        y = b;
        z = c;
        Radius = r;
    }
    double GetVolume()
    {
        return ((4.0 / 3.0) * PI * Radius * Radius * Radius);
    }
};

int main()
{
    CSphere Sph(1, 2, 3, 4);
    cout << Sph.GetVolume() << endl;

    return 0;
}