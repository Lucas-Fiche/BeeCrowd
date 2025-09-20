#include <stdio.h>

int main(){

    int valores[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    int total_valores = 12;
    int qtd_valores[12] = {0};

    double valor_reais = 0.0;
    scanf("%lf", &valor_reais);

    long long valor_centavos = (long long)(valor_reais * 100 + 0.5);

    printf("NOTAS:\n");
    for (int i = 0; i < total_valores; i++){
        qtd_valores[i] = valor_centavos/valores[i];
        valor_centavos = valor_centavos % valores[i];
        if (valores[i] > 100){
            printf("%d nota(s) de R$ %d.00\n", qtd_valores[i], valores[i]/100);
        } else {
            if (valores[i] == 100){
                printf("MOEDAS:\n");
            }
            printf("%d moeda(s) de R$ %.2f\n", qtd_valores[i], (float) valores[i]/100);
        }
    }

    return 0;
}