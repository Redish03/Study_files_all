#include <iostream>

using namespace std;

struct Point
{
    private:
    int x;
    int y;

    public:
        void X(int a, int b) { x = a, y = b; }
        void print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main()
{
    Point p1;
    p1.X(3, 4);
    p1.print();

    return 0;
}