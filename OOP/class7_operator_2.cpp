#include <iostream>

using namespace std;

class Cpoint {
    private:
        int x;
        int y;

    public:
        Cpoint(int a = 0, int b = 0) : x(a), y(b){ }
        void Print() { cout << "(" << x << ", " << y << ")" << endl; }
        friend Cpoint operator+(const Cpoint &Po1, const Cpoint &Po2);
};

Cpoint operator+(const Cpoint &Po1, const Cpoint &Po2)
{
    return Cpoint(Po1.x + Po2.x, Po1.y + Po2.y);
}

int main(){
    Cpoint P1(1, 1);
    Cpoint P2(2, 2);
    Cpoint P3 = P1 + P2;

    P3.Print();
    return 0;
}