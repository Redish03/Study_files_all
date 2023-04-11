#include <iostream>

using namespace std;

 
int Sum(int num1 = 1, int num2 = 2, int num3 = 3, int num4 = 4, int num5 = 5)
{
    return num1 + num2 + num3 + num4 + num5;
}

int main(void)
{
    cout << "Sum():" << Sum() << endl;
    cout << "Sum(5):" << Sum(5) << endl;
    cout << "Sum(4, 5):" << Sum(4, 5) << endl;
    cout << "Sum(3, 4, 5):" << Sum(3, 4, 5) << endl;
    cout << "Sum(2, 3, 4, 5):" << Sum(2, 3, 4, 5) << endl;
    cout << "Sum(1, 2, 3, 4, 5):" << Sum(1, 2, 3, 4, 5) << endl;

    return 0;
}