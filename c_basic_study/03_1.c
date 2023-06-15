#include <stdio.h>

int min, max;

void min_max(int a, int b, int c){
    if( a >= b && b >= c)
    {
        max = a;
        min = c;
    }
    else if(b >= a && a>= c)
    {
        max = b;
        min = c;
    }
    else if(a >= c && c >= b) {
        max = a;
        min = b;
    }
    else if(b >= c && c>= a){
        max = b;
        min = a;
    }
    else if(c >= a && a >=b){
        max = c;
        min = b;
    }
    else if(c >= b && b >= a){
        max = c;
        min = a;
    }
}

int main(){
    int n, m, l;
    printf("Enter three integers.\n");
    scanf("%d%d%d", &n, &m, &l);

    min_max(n, m, l);
    printf("min is %d, max is %d.", min, max);
}