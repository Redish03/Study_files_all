#include <iostream>

using namespace std;

int main()
{
    char a = 10;
    char *b = &a;

    cout << sizeof(b);
}