#include <iostream>

using namespace std;

int main()
{
    int *p = new int[5];
    // int 형 변수 5개 동적 할당

    for (int i = 0; i < 5; i++)
    {
        p[i] = i;
        // 포인터를 통해 배열 처럼 사용
    }

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }

    delete[] p; // 배열 동적 할당 시 해제
    return 0;
}