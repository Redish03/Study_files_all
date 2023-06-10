#include <stdio.h>

int is_palindrome(char s[], int first, int last)
{
    if(first >= last)
        return 1;
    
    if(s[first] == s[last])
    {
        return is_palindrome(s, first + 1, last - 1);
    }
    else{
        return 0;
    }
}

int main()
{
    char sentence[100];
    char ch;
    int count = 0;

    printf("Enter input sentence.\n");

    while((ch=getchar())!='\n')
    {
        sentence[count] = ch;
        count++;
    }
    
    if (is_palindrome(sentence, 0, count - 1))
    {
        printf("Yes, it is a palindrome.\n");
    }
    else
    {
        printf("No, It isn't a palindrome.\n");
    }
}