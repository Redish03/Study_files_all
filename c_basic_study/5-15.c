#include <stdio.h>

void calculate(double op1, char op, double op2)
{
    switch (op)
    {
        case '+':
            printf("%.3f + %.3f = %.3f.\n", op1, op2, op1 + op2);
            break;
    
        case '-':
            printf("%.3f - %.3f = %.3f.\n", op1, op2, op1 - op2);
            break;

        case '*':
            printf("%.3f * %.3f = %.3f.\n", op1, op2, op1 * op2);
            break;

        case '/':
            printf("%.3f / %.3f = %.3f.\n", op1, op2, op1 / op2);
            break;

        default:
            printf("Not an allowable operator.\n");
            break;
    }
}

int main()
{
    char operator;
    double operand1, operand2;
    printf("Enter an expression. For EXAMPLE, 2.20 + 3.30.\n");
    scanf("%lf %c %lf", &operand1, &operator, &operand2);
    calculate(operand1, operator, operand2);
    return 0;
}