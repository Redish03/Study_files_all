#include <iostream>

using namespace std;

class cpoint{
    private:
        int x, y;

    public:
        cpoint : x(0), y(0) { }
        cpoint(int a) : x(a), y(a) { }
        cpoint(int a, int b) : x(a), y(b) { }
        void setXY(int a, int b) { x = a, y = b; }
        void print() { cout << "(" << x << ", " << y << ")"; }
}

int main()
{
    cpoint *ptr;
    ptr = new cpoint;
    ptr->print();
    delete ptr;

    ptr = new cpoint();
    ptr->print();
    delete ptr;

    ptr = new cpoint(1);
    ptr->print();
    delete ptr;

    ptr = new cpoint(2, 3);
    ptr->print();
    delete ptr;

    return 0;
}