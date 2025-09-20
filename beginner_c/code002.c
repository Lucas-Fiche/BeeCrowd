#include <stdio.h>
#include <math.h>

int main(){
    double n = 3.14159;
    double R = 0;
    scanf("%lf", &R);

    double A = n*(pow(R, 2.0));

    printf("A=%.4f\n", A);

    return 0;
}