#include <stdio.h>
#include <math.h>

int main(){
    float A = 0;
    float B = 0;
    float C = 0;
    double pi = 3.14159;

    scanf("%f %f %f", &A, &B, &C);

    float area_tria_ret = (A*C)/2;
    float area_cir = pi*(pow(C, 2));
    float area_trap = ((A+B)*C)/2;
    float area_quad = B*B;
    float area_rec = A*B;

    printf("TRIANGULO: %.3lf\n", area_tria_ret);
    printf("CIRCULO: %.3lf\n", area_cir);
    printf("TRAPEZIO: %.3lf\n", area_trap);
    printf("QUADRADO: %.3lf\n", area_quad);
    printf("RETANGULO: %.3lf\n", area_rec);

    return 0;
}