#include <iostream>

using namespace std;

class CArray
{
private:
    int ary[5];

public:
    CArray()
    {
        for (int i = 0; i < 5; i++)
            ary[i] = 0;
    }
    int &GetElem(int i) //참조반환하지 않으면 상수형태이기 때문에 lvalue 오류
    {
        return ary[i];
    }

    CArray &Increase(int a)
    {
        ary[a] += 1;
        return *this;
    }
};

int main(void)
{
    int i;
    CArray Ary;
    for (i = 0; i < 5; i++)
        Ary.GetElem(i) = i;
    
    Ary.Increase(0).Increase(1).Increase(2).Increase(3).Increase(4);

    for (i = 0; i < 5; i++)
        cout << "Ary[" << i << "]" << Ary.GetElem(i) << endl;
 
    return 0;
}