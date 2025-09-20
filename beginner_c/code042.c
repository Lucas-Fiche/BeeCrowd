#include <stdio.h>

void checagem(int n1, int n2, int *meio, int *menor){
    if (n1 > n2){
                *meio = n1;
                *menor = n2;
            } else {
                *meio = n2;
                *menor = n1;
            }
}

int main(){

    int n1 = 0, n2 = 0, n3 = 0;
    scanf("%d %d %d", &n1, &n2, &n3);
    int valor1 = n1, valor2 = n2, valor3 = n3;
    int maior, meio, menor;

    if (n1 > n2 && n1 > n3){
        maior = n1;
        checagem(n2, n3, &meio, &menor);
    } else if (n2 > n1 && n2 > n3){
        maior = n2;
        checagem(n1, n3, &meio, &menor);
    } else {
        maior = n3;
        checagem(n1, n2, &meio, &menor);
    }  

    printf("%d\n", menor);
    printf("%d\n", meio);
    printf("%d\n", maior);
    printf("\n");
    printf("%d\n", valor1);
    printf("%d\n", valor2);
    printf("%d\n", valor3);
    return 0;
}