#define PI 3.14
#include <iostream>

using namespace std;

class CCircle
{
public:
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
    // CCircle로 부터 상속
public:
    int z;

public:
    double GetVolume()
    {
        return ((4.0 / 3.0) * PI * Radius * Radius * Radius);
    }
};

int main()
{
    CSphere Sph;
    Sph.x = 1;
    Sph.y = 1;
    Sph.z = 1;
    Sph.Radius = 5;

    cout << "구의 표면적 : " << Sph.GetArea() << endl;
    cout << "구의 부피 : " << Sph.GetVolume() << endl;

    cout << Cir.GetArea() << endl;

    return 0;
}