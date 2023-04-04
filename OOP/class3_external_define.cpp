#include <iostream>

using namespace std;

class Cpoint
{
    private:
        int x, y;

    public:
        Cpoint(int a, int b);
        void Move(int a, int b);
        void print();
};

Cpoint::Cpoint(int a, int b) : x(a), y(b)
{

}

void Cpoint::Move(int a, int b)
{
    x += a;
    y += b;
}

void Cpoint::print()
{
    cout << "(" << x << ", " << y << ")" << endl;
}