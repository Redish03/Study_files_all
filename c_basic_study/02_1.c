#include <stdio.h>

double change_rate(double rr){
    rr *= 1.1;
    return rr;
}

int main(){
    double rate = .2;
    printf("The modified rate is %lf.\n", change_rate(rate));
    return 0;
}