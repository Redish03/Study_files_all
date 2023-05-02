#include <iostream>

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
            arr[i] = copy.arr[i];
    }
    ~CArray()
    {
        delete[]arr;
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
    int length() 
    {
        return len;
    }
    int index(int len) 
    {
        return arr[len];
    }
};

CArray Sum(CArray A1, CArray A2)
{
    int minLen = (A1.length() < A2.length()) ? A1.length() : A2.length();
    int maxLen = (A1.length() < A2.length()) ? A2.length() : A1.length();
    CArray A3(maxLen); 
    for (int i = 0; i < minLen; i++)
    {
        A3.Set(i, A1.index(i) + A2.index(i));
    }
    for (int i = minLen; i < maxLen; i++)
    {
        if (A1.length() > A2.length())
            A3.Set(i, A1.index(i));
        else 
            A3.Set(i, A2.index(i));
    }
    return A3;
}

int main(void)
{
    CArray Ary1(5);
    CArray Ary2(7);
    Ary2.Set(0, 11).Set(1, 12).Set(2, 13);

    CArray Ary3 = Sum(Ary1, Ary2);
    Ary1.Print();
    Ary2.Print();
    Ary3.Print();
    return 0;
}