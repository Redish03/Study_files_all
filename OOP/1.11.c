#include <stdio.h>

struct Point

{
    int x;
    int y;
};

void Swap(struct Point &p1, struct Point &p2) //참조형 전달
{
    struct Point temp = p1;
    p1 = p2;
    p2 = temp;
}

int main(void)

{
    struct Point p1 = { 1, 2 };
    struct Point p2 = { 3, 4 };

    printf("구조체 p1:[%d, %d]\n", p1.x, p1.y);
    printf("구조체 p2:[%d, %d]\n", p2.x, p2.y);
    printf("변경 후\n");
    Swap(p1, p2);
    printf("구조체 p1:[%d, %d]\n", p1.x, p1.y);

    printf("구조체 p2:[%d, %d]\n", p2.x, p2.y);

    return 0;
}