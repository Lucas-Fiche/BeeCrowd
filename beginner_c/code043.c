#include <stdio.h>

int main(){

    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);
    
    if (A + B > C && A + C > B && B + C > A){
        float perimetro_triangulo = A + B + C;
        printf("Perimetro = %.1f\n", perimetro_triangulo);
    } else {
        float area_trapezio = (A + B) * C/2;
        printf("Area = %.1f\n", area_trapezio);
    }
        
    return 0;
}