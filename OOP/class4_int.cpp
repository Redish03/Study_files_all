#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    int i;

    ptr = new int(3);
    cout << *ptr << endl;
    delete ptr;

    ptr = new int[5];
    for (i = 0; i < 5; i ++)
    {
        ptr[i] = i;
        cout << ptr[i] << endl;
    }
    delete[] ptr;

    return 0;
}