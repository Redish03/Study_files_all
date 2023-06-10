#include <iostream>

using namespace std;

class CShape

{

protected:
    int x, y;

public:
    CShape(int a, int b) : x(a), y(b)

    {
    }

    void Move(int a, int b)

    {

        x += a;

        y += b;
    }

    virtual void Print() = 0; // ���� ���� �Լ�

    friend ostream &operator<<(ostream &out, CShape &Sh);
};

ostream &operator<<(ostream &out, CShape &Sh) //<< �����ε�

{

    Sh.Print();

    return out;
}

class CCircle : public CShape

{

private:
    double Radius;

public:
    CCircle(int a, int b, double r) : CShape(a, b), Radius(r)

    {
    }

    virtual double GetArea()

    {

        return (3.14 * Radius * Radius);
    }

    void Print()

    {

        cout << "���� ����: " << GetArea() << endl;
    }
};

class CRect : public CShape

{

private:
    int Garo, Sero;

public:
    CRect(int a, int b, int g, int s) : CShape(a, b), Garo(g), Sero(s)

    {
    }

    double GetArea()

    {

        return (Garo * Sero);
    }

    void Print()

    {

        cout << "�簢���� ����: " << GetArea() << endl;
    }
};

int main(void)

{

    CCircle Cir(1, 1, 1);

    CRect Rect(2, 2, 2, 2);

    CShape *pSpe;

    pSpe = &Cir;

    cout << *pSpe;

    pSpe = &Rect;

    cout << *pSpe;

    return 0;
}