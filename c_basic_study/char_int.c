#include <stdio.h>

int is_digit(int ch) { // 1바이트 char 타입 값이 4바이트 int 타입으로 넘어옴
    printf("%d", ch);

    if (48 <= ch && ch <= 57) 
        return 1;
    else
        return 0;
}

int main() {
    char ch1, ch2, ch3; 
    printf("Enter a 3-letter word.\n");
    scanf("%c%c%c", &ch1, &ch2, &ch3);

    int a = is_digit(ch1);
    // printf("%d", is_digit(ch1));

    // printf("Digit appears %d times.", is_digit(ch1) + is_digit(ch2) + is_digit(ch3));

    return 0;
}
