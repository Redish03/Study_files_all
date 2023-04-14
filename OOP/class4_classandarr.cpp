#include <iostream>

using namespace std;

class CPoint{
    private :
        int x, y;

    public : 
        CPoint(int a, int b) : x(a), y(b) { }
        void print() { cout << "(" << x << ", " << y << ")"; }
};

int main()
{
    CPoint pt[5] = {CPoint(0, 0), CPoint(1, 1), CPoint(2, 2), CPoint(3, 3), CPoint(4, 4)};
    for (int i = 0; i < 5; i++)
    {
        pt[i].print();
    }
    return 0;
}