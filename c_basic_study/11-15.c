#define ROW 2
#define COL 3
#include <stdio.h>

int main()
{
    int i, j;
    int first[ROW][COL], second[ROW][COL], add[ROW][COL];

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("Enter first matrix [%d][%d]:", i, j);
            scanf("%d", &first[i][j]);
        }
    }
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("Enter second matrix [%d][%d]:", i, j);
            scanf("%d", &second[i][j]);
        }
    }

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            add[i][j] = first[i][j] + second[i][j];
        }
    }
    printf("Sum of the two matrix is,\n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }
}