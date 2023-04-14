#include <stdio.h>

int show_menu()
{
    int choice;
    printf("Press 1 to add. 2 to subtract. 3 to exit.\n");
    scanf("%d", &choice);
    return choice;
}

int main()
{
    int selection;
    selection = show_menu();
    printf("%d.\n", selection);
    return 0;
}