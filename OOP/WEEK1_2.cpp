#include <iostream>

using namespace std;

int main()
{
    cout << "너비를 입력하세요 >>";

    int wid;
    cin >> wid;

    cout << "높이를 입력하세요 >>";

    int height;
    cin >> height;

    int area = wid * height;
    cout << "area : " << area << '\n';
}