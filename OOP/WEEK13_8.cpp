#include <iostream>

using namespace std;

void three(void)
{
    cout << "three() " << endl;
    throw -1;
}

void ftwo()
{
    cout << "ftwo()" << endl;
    three();
}

void fone()
{
    cout << "fone()" << endl;
    ftwo();
}

int main()
{
    try
    {
        fone();
    }
    catch (int n)
    {
        cout << "exception" << endl;
    }
}