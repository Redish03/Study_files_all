#include <iostream>
#define PI 3.14

using namespace std;

class CShape
{
protected:
    int x, y;

public:
    CShape(int a, int b) : x(a), y(b) { }
    void Move(int a, int b)
    {
        x += a;
        y += b;
    }
}

class CCircle : public CShape
{
protected:
    double Radius;

public:
    CCircle(int a, int b, double r) : CShape(a, b), Radius(r) {}
    double GetArea()
    {
        return (PI * Radius * Radius);
        // 가상함수
    }
};

class CRect : public CShape
{
private:
    int Ga, Se;

public:
    CRect(int a, int b, int g, int s) : CShape(a, b), Ga(g), Se(s) {}
    double GetArea()
    {
        return (Ga * Se);
    }
};

int main()
{
    CCircle Cir(1, 1, 1);
    CRect Rect(2, 2, 2, 2);

    Cir.Move(1, 1);
    Rect.Move(2, 2);

    cout << "원의 면적 : " << Cir.GetArea() << endl;
    cout << "사각형의 면적 : " << Rect.GetArea() << endl;
    return 0;
}