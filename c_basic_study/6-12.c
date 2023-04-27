#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch;
    printf("Enter a character.\n");
    for (ch = getchar(); ch != EOF; ch = getchar())
    {
        if(islower(ch))
            ch = toupper(ch);
        putchar(ch);
        putchar('\n');
        getchar();
        printf("Enter a character.\n");
    }
}