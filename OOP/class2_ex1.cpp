#include <iostream>

using namespace std;

int main()
{
    int i;
    double c;
    char str[20];

    cout << "int, double input : ";
    cin >> i >> c;
    cin >> str;

    cout << "int : " << i <<'\n';
    cout << "double : " << c << '\n';
    cout << "string : " << str;
}