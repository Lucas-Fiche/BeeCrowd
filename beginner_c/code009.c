#include <stdio.h>

int main(){
    char nome[26];
    fgets(nome, sizeof(nome), stdin);

    double salary = 0;
    scanf("%lf", &salary);

    double sales = 0;
    scanf("%lf", &sales);

    double final_salary = salary + (sales * 0.15);

    printf("TOTAL = R$ %.2lf\n", final_salary);

    return 0;
}