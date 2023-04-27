#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch, state;
    state = 0;

    printf("Enter a sentence in lower-case letters.\n");
    for (ch = getchar(); ch != '\n'; ch = getchar())
    {
        switch (state)
        {
        case 0:
            if(isalpha(ch)) {
                putchar(toupper(ch));
                state = 1;
            }
            else
                putchar(ch);
            break;
        
        case 1:
            putchar(ch);
            if(!isalpha(ch))
                state = 0;
            break;
        }
    }
    putchar('\n');
    return 0;
}