//x = (-b ± √(b² - 4ac)) / 2a

#include <stdio.h>
#include <math.h>

int main(){
    double A = 0.0, B = 0.0, C = 0.0;
    scanf("%lf %lf %lf", &A, &B, &C);
    double delta = pow(B, 2)-(4*A*C);

    if (A == 0.0 || delta < 0.0){
        printf("Impossivel calcular\n");
    } else{
        double x_positivo = ((-1 * B) + sqrt(delta))/(2*A);
        double x_negativo = ((-1 * B) - sqrt(delta))/(2*A);
        printf("R1 = %.5lf\n", x_positivo);
        printf("R2 = %.5lf\n", x_negativo);
    }

    return 0;
}