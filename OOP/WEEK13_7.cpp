#include <iostream>

using namespace std;

void divide(int n1, int n2)
{
    if (n2 == 0)
    {
        throw n2;
    }

    cout << "정수 몫 : " << n1 / n2 << endl;
    cout << "정수 나머지 : " << n1 % n2 << endl;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2; // 예외 발생 지점

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