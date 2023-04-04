#include <iostream>

using namespace std;

class point
{
    private:
        int x;
        int y;


    public:
        point(int a, int b) { x = a; y = b; }
        void print() { cout << "(" << x << ", " << y << ")" << endl; }
};