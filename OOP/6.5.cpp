#include <iostream>
#include <cstring>

using namespace std;

class CArray
{
private:
    int *arr;
    int len;

public:
    CArray(int num) :len(num)
    {
        arr = new int[len];
        for (int i = 0; i < len; i++)
            arr[i] = i;
    }
    CArray(const CArray &copy) :len(copy.len) 
    {
        arr = new int[len];
        for (int i = 0; i < len; i++)
            arr[i] = i;
    }

    CArray &Set(int num, int a) 
    {
        arr[num] = a;
        return *this;
    }
    void Print()
    {
        for (int i = 0; i < len; i++)
            cout << arr[i] << " ";
            
        cout << endl;
    }
};

int main(void)
{
    CArray Ary1(5);
    CArray Ary2(7);
    CArray Ary3(Ary1);

    Ary2.Set(0, 11).Set(1, 12).Set(2, 13);
    Ary1.Print();
    Ary2.Print();
    Ary3.Print();
    return 0;
}

