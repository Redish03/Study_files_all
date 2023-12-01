#include <iostream>
#include <vector>
#include <cstring>
#include <time.h>

using namespace std;

class Circle
{
private:
    int xp, yp, radius;

public:
    Circle(int x = 0, int y = 0, int r = 0) : xp(x), yp(y), radius(r) {}
    void ShowInfo()
    {
        cout << radius << "(" << xp << ", " << yp << ")" << endl;
    }
};

int main()
{
    vector<Circle> v;
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        Circle circle(rand() % 20, rand() % 10, rand() % 10);
        v.push_back(circle);
    }

    for (Circle &e : v)
    {
        e.ShowInfo();
    }
}