#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class CPoint {
private:
        int x;
        int y;

public:
        CPoint() :x(0), y(0) { }
        CPoint(int a, int b) :x(a), y(b) { }
        void SetXY(int a, int b)
        {
            x = a;
            y = b;
        }

        void Print()
        {
            cout << "(" << x << ", " << y << ")" << endl;
        }
};

 

int main(void) {
    CPoint **ptr;
    srand((unsigned)time(NULL));

    ptr = new CPoint*[2];
    for (int i = 0; i < 2; i++)
    {
        ptr[i] = new CPoint[3];
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ptr[i][j].SetXY(rand() % 100 + 1, rand() % 100 + 1);
            ptr[i][j].Print();
        }
    }

    for (int i = 0; i < 2; i++)
    {
        delete[]ptr[i];
    }
    delete ptr;
}