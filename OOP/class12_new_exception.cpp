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
            cout << "�޸� �Ҵ� ����!" << endl;
            p = NULL;
        }
    }
    catch (bad_alloc &ex)
    {
        cout << "�޸� �Ҵ� ����!" << endl;
        cout << ex.what() << endl;
    }

    if (p != NULL)
    {
        cout << "�޸� �Ҵ翡 �����߽��ϴ�. " << endl;
    }
    else
    {
        cout << "�޸� �Ҵ翡 �����߽��ϴ�. " << endl;
    }
}