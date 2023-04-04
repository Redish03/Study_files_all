#include <iostream>

using namespace std;

int sum(int x, int y) 
{
    return (x + y);
}

int main()
{
    int a;
    int &b = a;
    int *p = &b; // 여기서 &는 주소연산자. 결국 a의 주소가 대입된다.
    int &c = b; // a, b, c 는 동일한 변수
    c = 5; //a = 5와 동일

    cout << "a : " << a << '\n';
    cout << "b : " << b << '\n';
    cout << "*p : " << *p << '\n';
    cout << "c : " << c << '\n';

    int (&rSum)(int, int) = sum; // 함수에 대한 참조
    cout << rSum(c, 5) << endl;

    int arr[3] = {0};
    int(&rArr)[3] = arr;
    rArr[2] = c;
    cout << arr[0] << " " << arr[1] << " " << arr[2];
}