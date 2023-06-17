#include <iostream>
#include <fstream>

using namespace std;

class CPoint
{
private:
    int x, y;

public:
    CPoint(int a = 0, int b = 0) : x(a), y(b) {}
    friend istream &operator>>(istream &is, CPoint &Po);
    friend ostream &operator<<(ostream &os, CPoint &Po);
};

istream &operator>>(istream &is, CPoint &Po) // >> ������ �����ε�
{
    is >> Po.x >> Po.y;
    return is;
}

ostream &operator<<(ostream &os, CPoint &Po) // << ������ �����ε�
{
    os << Po.x << " " << Po.y << endl;
    return os;
}

int main()
{
    CPoint Po[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "��ǥ (x, y) �Է� : ";
        cin >> Po[i];
    }

    ofstream fout("ex9.dat");
    for (int i = 0; i < 5; i++)
    {
        fout << Po[i];
    }
    fout.close();

    ifstream fin("ex9.dat");
    CPoint Temp;
    for (int i = 0; i < 5; i++)
    {
        fin >> Temp;
        cout << Temp;
    }
    fin.close();

    return 0;
}