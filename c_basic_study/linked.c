#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};


int main()
{
    int i;
    struct Node *pStart = NULL;
    struct Node *pEnd = NULL;
    struct Node *Current;

    for (i = 1; i <= 10; i++)
    {
        Current = (struct Node *)malloc(sizeof(struct Node));
        Current->data = i * 100;
        Current->next = NULL;
        if(pStart == NULL)
        {
            pStart = pEnd = Current;
        }
        else
        {
            pEnd->next = Current;
            pEnd = Current;
        }
        printf("%d %d", Current->data, Current->next);
    }
    return 0;
}