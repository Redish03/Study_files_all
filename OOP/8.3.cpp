#include <iostream>

using namespace std;

#define PI 3.14

class Point

{

private:
    int x, y;

public:
    Point(int a = 0, int b = 0) : x(a), y(b)

    {
    }

    void Move(int c, int d)

    {

        x += c;

        y += d;
    }

    void Draw()

    {

        cout << "중심: ";

        cout << "(" << x << ", " << y << ")" << endl;
    }
};

class CCircle : public Point

{

private:
    double Radius;

public:
    CCircle(int a = 0, int b = 0, double r = 1) : Point(a, b), Radius(r)

    {
    }

    void Draw()

    {

        Point::Draw();

        cout << "반지름: ";

        cout << Radius << endl;
    }

    double GetArea()

    {

        return (PI * Radius * Radius);
    }
};

int main(void)

{

    Point p(1, 1);

    p.Draw();

    p.Move(2, 2);

    p.Draw();

    CCircle c(1, 1, 3);

    c.Draw();

    c.Move(3, 3);

    c.Draw();

    cout << "원의 넓이는: " << c.GetArea() << endl;

    return 0;
}