#include <stdio.h>

int main(){
    int X = 0;
    double Y = 0;
    scanf("%d", &X);
    scanf("%lf", &Y);

    double km_l = X/Y;

    printf("%.3lf km/l\n", km_l);

    return 0;
}