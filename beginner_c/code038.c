#include <stdio.h>

int main(){

    int codigo = 0, qtd = 0;
    double valor = 0.0;
    scanf("%d %d", &codigo, &qtd);

    if (codigo == 1){
        valor = qtd * 4.0;
    } else if (codigo == 2){
        valor = qtd * 4.5;
    } else if (codigo == 3){
        valor = qtd * 5.0;
    } else if (codigo == 4){
        valor = qtd * 2.0;
    } else if (codigo == 5){
        valor = qtd * 1.5;
    };

    printf("Total: R$ %.2f\n", valor);

    return 0;
}