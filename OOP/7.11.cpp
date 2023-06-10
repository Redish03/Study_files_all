#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class CArray{
    private:
        int *ary;
        int count;
    public:
        CArray(int num) : count(num)
        {
            ary = new int[count];
            for (int i = 0; i < count; i++)
            {
                ary[i] = rand() % 10 + 1;
            }
        }
        ~CArray()
        {
            delete[] ary;
        }
        CArray(const CArray &copy) // 복사생성자
        {
            count = copy.count;
            ary = new int[count];
            for (int i = 0; i < count; i++)
            {
                ary[i] = copy.ary[i];
            }
        }
        CArray &operator = (const CArray &copy)
        {
            delete[] ary;
            count = copy.count;
            ary = new int[count];
            for (int i = 0; i < count; i++)
            {
                ary[i] = copy.ary[i];
            }
            return (*this);
        }
        friend ostream &operator<<(ostream &out, const CArray Ao);
};

ostream &operator<<(ostream &out, const CArray Ao)
{
    for (int i = 0; i < Ao.count; i++)
    {
        out << Ao.ary[i] << "\t";
    }
    return out;
}

int main()
{
    srand((unsigned)time(NULL));

    CArray Ary1(3);
    CArray Ary2(5);

    cout << Ary1 << endl;
    cout << Ary2 << endl;

    Ary1 = Ary2;

    cout << Ary1 << endl;
    cout << Ary2 << endl;
    return 0;
}