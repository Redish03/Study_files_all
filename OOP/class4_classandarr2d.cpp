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
    CPoint pt[3][2] = { {CPoint(0, 0),CPoint(0, 1)}, {CPoint(1, 0), CPoint(1, 1)}, {CPoint(2, 0), CPoint(2, 1)} };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            pt[i][j].print();
            cout << "\t";
        }
        cout << endl;
    }

    return 0;
}