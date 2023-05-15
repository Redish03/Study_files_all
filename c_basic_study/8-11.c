#include <stdio.h>

inline int add(int a, int b) {
    return (a + b);
}

int main() {
    int sum, first = 10, second = 20;
    sum = add(first, second);
    printf("sum is %d.\n", sum);
    return 0;
}