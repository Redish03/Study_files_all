#include <iostream>

using namespace std;

void divide(int n1, int n2)
{
    if (n2 == 0)
    {
        throw n2;
    }

    cout << "���� �� : " << n1 / n2 << endl;
    cout << "���� ������ : " << n1 % n2 << endl;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2; // ���� �߻� ����

    try
    {
        divide(n1, n2);
    }
    catch (int ex)
    {
        cout << "Can't divide to zero" << endl;
    }

    return 0;
}