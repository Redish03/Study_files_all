#include <stdio.h>

int main()
{
    int salary, bonus, total;
    salary = 400;
    bonus = 20;
    salary + bonus;
    total = salary + bonus;
    printf("Total is, %d\n", total);

    bonus = salary = 400;
    printf("Bonus plus salary is, %d\n", bonus + salary);
    return 0;
}