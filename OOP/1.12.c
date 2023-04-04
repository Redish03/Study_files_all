#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct node_
{
    int num;
    struct node_ *left;
    struct node_ *right;
}Node;

void ordertr(Node *Root)
{
    if(Root == NULL) return;
    ordertr(Root->left);
    printf("%d ", Root->num);
    ordertr(Root->right);
}

int main()
{
    Node *Root = NULL;
    Node *Initial;
    Node *Parent = NULL;
    Node *Cur;

    for (int i = 1; i <= 5; i++)
    {
        Cur = (Node *)malloc(sizeof(Node));
        Cur->data = rand() % 10 + 1;
        printf("%d번째 데이터 : %d\n", i, Cur->data);
        Cur->left = NULL;
        Cur->right = NULL;

        if(Root == NULL)
        {
            Root = Cur;
            printf("%d번째 노드 루트에 저장되었습니다.\n", i);
            Initial = Root;
            continue;
        }
        while(1)
        {
            Parent = Initial;
            printf("InitialRoot : %d\n", InitialRoot->data);
            if(Initial->data > Cur-> data)
            {
                if(Initial->left)
                {
                    Initial = Initial->left;
                }
                else
                {
                    Initial->left = Cur;
                    printf("%d번재 데이터 왼쪽으로 갔습니다.\n", i);
                    break;
                }
            }
            else
            {
                if(Initial->right)
                {
                    Initial = Initial->right;
                }
                else
                {
                    Initial->right = Cur;
                    printf("%d번째 데이터 오른쪽으로 갔습니다.\n", i);
                    break;
                }
            }
        }
        Parent = Cur;
        Initial = Root;
    }
    ordertr(Initial);
    return 0;
}