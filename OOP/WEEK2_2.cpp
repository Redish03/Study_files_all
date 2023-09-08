#include <iostream>

using namespace std;

class Rectangle
{
private:
    int width;
    int height;

public:
    int getArea();
    // void setW(int w)
    // {
    //     if (w > 10)
    //     {
    //         cout << " Width Must be 0 ~ 10 .";
    //         return;
    //     }
    //     width = w;
    // }
    // void setH(int h) { height = h; }
    int getW() { return width; }
    int getH() { return height; }
    // Rectangle()
    // {
    // }
    Rectangle(int w, int h)
    {
        width = w;
        height = h;
    }
};

int Rectangle::getArea()
{
    return width * height;
}

int main()
{
    Rectangle rect(3, 5);
    cout << "A square's area is " << rect.getArea() << endl;
}