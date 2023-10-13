#include <iostream>

using namespace std;

class Counter
{
private:
    int val = 0;

public:
    void Print()
    {
        cout << val << endl;
    }

    friend void Setval(Counter &c, int y);
};

void Setval(Counter &c, int y)
{
    c.val = y;
}

int main()
{
    Counter cnt;

    cnt.Print();
    Setval(cnt, 10);
    cnt.Print();
}