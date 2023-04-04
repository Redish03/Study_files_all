#include <iostream>

using namespace std;

int main()
{
    int *p = malloc(sizeof(int) * 3); 
    // C에서는 가능 : 자동 형변환
    // (void *) 반환, C++ 자동 형변환 X

    free(p);
}