#include <stdio.h>
#include <math.h>

void maior_lado(float A, float B, float C, float *lado_A, float *lado_B, float *lado_C){
    if (A > B && A > C) {
        *lado_A = A;
        if (B > C){
            *lado_B = B;
            *lado_C = C;
        } else {
            *lado_B = C;
            *lado_C = B;
        }
    } else if (B > A && B > C) {
        *lado_A = B;
        if (A > C){
            *lado_B = A;
            *lado_C = C;
        } else {
            *lado_B = C;
            *lado_C = A;
        }
    } else {
        *lado_A = C;
        if (A > B){
            *lado_B = A;
            *lado_C = B;
        } else {
            *lado_B = B;
            *lado_C = A;
        }
    }
}

int nao_triangulo(float lado_A, float lado_B, float lado_C){
    if (lado_A >= lado_B + lado_C){
        printf("NAO FORMA TRIANGULO\n");
        return 1;
    }

    return 0;
}

void triangulo_retangulo(float lado_A, float lado_B, float lado_C){
    if (pow(lado_A, 2) == pow(lado_B, 2) + pow(lado_C, 2)){
        printf("TRIANGULO RETANGULO\n");
    }
}

void triangulo_obtusangulo(float lado_A, float lado_B, float lado_C){
    if (pow(lado_A, 2) > pow(lado_B, 2) + pow(lado_C, 2)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
}

void triangulo_acutangulo(float lado_A, float lado_B, float lado_C){
    if (pow(lado_A, 2) < pow(lado_B, 2) + pow(lado_C, 2)){
        printf("TRIANGULO ACUTANGULO\n");
    }
}

void triangulo_equilatero(float lado_A, float lado_B, float lado_C){
    if (lado_A == lado_B && lado_A == lado_C && lado_B == lado_C){
        printf("TRIANGULO EQUILATERO\n");
    }
}

void triangulo_isoceles(float lado_A, float lado_B, float lado_C){
    if (lado_A == lado_B && lado_A != lado_C || lado_A == lado_C && lado_A != lado_B || lado_B == lado_C && lado_B != lado_A){
        printf("TRIANGULO ISOSCELES\n");
    }
}

int main(){

    float lado_A, lado_B, lado_C;
    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);

    maior_lado(A, B, C, &lado_A, &lado_B, &lado_C);

    
    if (nao_triangulo(lado_A, lado_B, lado_C) != 1){
        triangulo_retangulo(lado_A, lado_B, lado_C);
        triangulo_obtusangulo(lado_A, lado_B, lado_C);
        triangulo_acutangulo(lado_A, lado_B, lado_C);
        triangulo_equilatero(lado_A, lado_B, lado_C);
        triangulo_isoceles(lado_A, lado_B, lado_C);
    }

    return 0;
}