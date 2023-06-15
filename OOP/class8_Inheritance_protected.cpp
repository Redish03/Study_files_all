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
    double GetVolume()
    {
        return ((4.0 / 3.0) * PI * Radius * Radius * Radius);
    }
};

int main()
{
    CCircle Cir;
    Cir.x = 5; // ERROR: x is protected member

    return 0;
}