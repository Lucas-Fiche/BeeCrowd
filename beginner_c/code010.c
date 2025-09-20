#include <stdio.h>

int main(){
    int product1, product2, units1, units2;
    double price1, price2;

    scanf("%d %d %lf", &product1, &units1, &price1);
    scanf("%d %d %lf", &product2, &units2, &price2);

    double pay = (units1 * price1) + (units2 * price2);

    printf("VALOR A PAGAR: R$ %.2lf\n", pay);

    return 0;
}