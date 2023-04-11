#include <iostream>

using namespace std;
#define PI 3.14

int GetArea(int col, int row)
{
    return col*row;
}

double GetArea(int radius)
{
    return radius*radius*PI;
} 

int main(void)
{
    int sel;
    cout << "[1].직사각형 넓이\t[2].원의 넓이:  ";
    cin >> sel;

    switch (sel)
    {
        case 1:
        int col, row;

        cout << "가로 세로 입력:";
        cin >> row >> col;
        cout << "직사각형의 넓이:" << GetArea(col, row) << endl;
        break;

        case 2:

        int radius;
        cout << "반지름 입력:";
        cin >> radius;
        cout << "원의 넓이:" << GetArea(radius) << endl;
        break;
        }
    return 0;
}