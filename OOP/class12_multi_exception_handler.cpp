#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "2���� ���� �Է� : ";
    cin >> x >> y;

    try
    {
        if (y == 0)
        {
            throw 1;
        }
        if (x <= 0 || y <= 0)
        {
            throw 1.0;
        }
        cout << "+ : " << x + y << endl;
        cout << "- : " << x - y << endl;
        cout << "* : " << x * y << endl;
        cout << "/ : " << x / y << endl;
    }
    catch (int a) // ���� ó�� �ڵ鷯 : int��
    {
        cout << "0���� �������� �����ϴ�." << endl;
    }
    catch (double a) // ���� ó�� �ڵ鷯: double��
    {
        cout << "x�� y�� ������ �� �� �����ϴ�." << endl;
    }
    catch (...) // ���� ó�� �ڵ鷯 : ��� Ÿ��
    {
        cout << "��� throw���� ���� �� �� �ִ� ����ó�� �ڵ鷯�Դϴ�." << endl;
    }

    cout << "��Ģ���� ����" << endl;

    return 0;
}