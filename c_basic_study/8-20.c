#include <stdio.h>

void reverse_it()
{
    char ch;
    scanf("%c", &ch);
    if(ch == '\n')
    {
        return;
    }
    else {
        reverse_it();
        printf("%c", ch);
    }
}

int main()
{
    printf("Enter a sentence.\n");
    reverse_it();
    printf("\n");
    return 0;
}