#include <iostream>
#include <cstring>
using namespace std;

class Pointer
{
    int xp, yp;

public:
    Pointer(int x = 0, int y = 0) : xp(x), yp(y)
    {
        cout << "Pointer 생성자 호출" << endl;
    }
    void setP(int x, int y)
    {
        xp = x;
        yp = y;
    }
    void showinfo() const
    {
        cout << "(" << xp << ", " << yp << ")" << endl;
    }
    ~Pointer()
    {
        cout << "Pointer 소멸자 호출" << endl;
    }
};

template <typename T>
class SmartPtr
{
    T *sp;

public:
    SmartPtr(T *p) : sp(p) {}
    T *operator->()
    {
        return sp;
    }
    T &operator*()
    {
        return *sp;
    }
    ~SmartPtr()
    {
        delete sp;
    }
};

int main()
{
    SmartPtr<Pointer> smp1(new Pointer(2, 7));
    SmartPtr<Pointer> smp2(new Pointer(3, 8));
    SmartPtr<Pointer> smp3(new Pointer(4, 9));
    smp1->showinfo();
    smp2->showinfo();
    smp3->showinfo();
}