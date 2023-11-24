#include <iostream>

using namespace std;

class Pointer
{
    int num;

public:
    Pointer(int n) : num(n)
    {
        cout << "Calling Pointer Constructor" << endl;
    }

    Pointer *operator->()
    {
        return this;
    }

    Pointer &operator*()
    {
        return *this;
    }

    void showinfo()
    {
        cout << num << endl;
    }

    void setP(int n)
    {
        num = n;
    }
};

int main()
{
    Pointer p(10);
    p.showinfo();

    (*p) = 20;
    p->showinfo();

    (*p).showinfo();
}