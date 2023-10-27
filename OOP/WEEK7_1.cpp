// Operator Overloading
#include <iostream>

using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int px = 0, int py = 0) : x(px), y(py){};
    void Print()
    {
        cout << x << ", " << y << endl;
    }
    Point operator+(const Point &po)
    {
        Point Po_return(x + po.x, y + po.y);

        return Po_return;
    }

    Point operator+=(const Point &po)
    {
        this->x += po.x;
        this->y += po.y;
        return *this;
    }

    friend bool operator==(const Point &p1, const Point &p2);
    friend Point operator-(const Point &, const Point &);
    friend bool operator!=(const Point &, const Point &);
};

bool operator==(const Point &p1, const Point &p2)
{
    if (p1.x == p2.x && p1.y == p2.y)
        return true;
    else
        return false;
}

bool operator!=(const Point &p1, const Point &p2)
{
    return !(p1 == p2);
}

Point operator-(const Point &p1, const Point &p2)
{
    Point p(p1.x - p2.x, p1.y - p2.y);

    return p;
}

int main()
{
    Point p1(5, 7);
    Point p2(3, 5);

    p1.Print();
    p2.Print();

    Point p3 = p2 + p1;
    Point p4 = p2 - p1;

    p3.Print();
    p4.Print();

    if (p3 == p4)
    {
        cout << "same";
    }
    if (p3 != p4)
    {
        cout << "Not same";
    }
}