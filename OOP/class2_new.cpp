#include <iostream>

using namespace std;

int main()
{
    int *p = new int(100);

    cout << "pointer variable's address : " << &p << endl;
    cout << "pointer variable's value   : " << p << endl;
    cout << "Dynamic variable's value   : " << *p << endl;

    delete p;

    return 0;
}