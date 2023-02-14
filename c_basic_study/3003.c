#include <stdio.h>

int main()
{
    int a, b, c, d, e, f;
    int answer[6];
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    answer[0] = 1 - a;
    answer[1] = 1 - b;
    answer[2] = 2 - c;
    answer[3] = 2 - d;
    answer[4] = 2 - e;
    answer[5] = 8 - f;
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", answer[i]);
    }
}