#include <iostream>

using namespace std;

template <typename T>
class CPoint
{
private:
    T x, y;

public:
    CPoint(T a = 0, T b = 0) : x(a), y(b) {}
    template <typename T>
    friend ostream &operator<<(ostream &out, CPoint<T> &Po);
};

template <typename T>
ostream &operator<<(ostream &out, CPoint<T> &Po)
{
    out << "(" << Po.x << ", " << Po.y << ")";
    return out;
}

template <typename T>
class CArray
{
private:
    T ary[5];

public:
    CArray(T a)
    {
        for (int i = 0; i < 5; i++)
        {
            ary[i] = a;
        }
    }
    void Print()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << ary[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    CArray<int> Ary1(5);
    CArray<CPoint<int>> Ary2(CPoint<int>(1, 2));

    Ary1.Print();
    Ary2.Print();

    return 0;
}