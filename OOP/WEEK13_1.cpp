#include <iostream>

using namespace std;

template <typename T>
class Vector
{
private:
    T xp, yp;

public:
    Vector(T x, T y) : xp(x), yp(y){};
    void showInfo()
    {
        cout << "(" << xp << ", " << yp << ")\n";
    };
};

int main()
{
    Vector<int> v(4, 6);
    v.showInfo();
}