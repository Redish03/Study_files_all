#include <stdio.h>

int main()
{
    int var = 5;
    int *p = &var; // 포인터 변수 선언 및 var 주소값 입력

    printf("var의 주소 : %d\n", &var);
    printf("var의 값 : %d\n", var);
    printf("p의 주소 : %d\n", &p);
    printf("p의 값 : %d\n", p);
    printf("p가 가리키는 변수의 값 : %d\n", *p);

    p++;

    printf(">> 변경후 \n");
    printf("p의 값 : %d\n", p);

    return 0;
}