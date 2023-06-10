#include <stdio.h>
#include <math.h>

void quad(double a, double b, double c, double *x1, double *x2)
{
    double num_2 = b * b - 4 * a * c;
    *x1 = (-b + sqrt(num_2)) / (2 * a);
    *x2 = (-b - sqrt(num_2)) / (2 * a);
    return;
}

int check_min(double fir, double sec, double thi)
{
    double num = (sec * sec) - (4 * fir * thi);

    if(num < 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    double A, B, C;
    double ans1, ans2;

    printf("Enter a, b, c for a*x^2 + b * x + c = 0: ");
    scanf("%lf%lf%lf", &A, &B, &C);

    while(!check_min(A, B, C)) 
    {
        printf("Enter a, b, c for a*x^2 + b * x + c = 0: ");
        scanf("%lf%lf%lf", &A, &B, &C);    
    }

    quad(A, B, C, &ans1, &ans2);
    printf("x1=%lf\n", ans1);
    printf("x2=%lf\n", ans2);
}