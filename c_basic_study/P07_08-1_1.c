#include <stdio.h>

double change_rate(double rate){
    rate *= 1.1;
    return rate;
}


int main()
{
    double rate = 0.2;
    double answer = change_rate(rate);
    printf("The modified rate is %lf.\n", answer);
    return 0;
}