#include <iostream>

using namespace std;

class Circle
{
public:
    int radius;
    Circle()
    {
        radius = 1;
        cout << "Create " << radius << "radius circle";
    }
    Circle(int r)
    {
        radius = r;
        cout << "Create " << radius << "radius circle";
    }
    double getArea();
};

double Circle::getArea()
{
    return 3.14 * radius * radius;
}

int main()
{
}