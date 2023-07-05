#include <iostream>
#include <new>

using namespace std;

int main()
{
    int *p;

    try
    {
        while (1)
        {
            p = new int[100000000];
            cout << "메모리 할당 성공!" << endl;
            p = NULL;
        }
    }
    catch (bad_alloc &ex)
    {
        cout << "메모리 할당 실패!" << endl;
        cout << ex.what() << endl;
    }

    if (p != NULL)
    {
        cout << "메모리 할당에 성공했습니다. " << endl;
    }
    else
    {
        cout << "메모리 할당에 실패했습니다. " << endl;
    }
}