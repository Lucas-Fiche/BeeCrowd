#include <stdio.h>

int main(){

    int emps_num = 0;
    scanf("%d", &emps_num);
    int hours = 0;
    scanf("%d", &hours);
    double amount_h = 0;
    scanf("%lf", &amount_h);

    double salary = hours * amount_h;

    printf("NUMBER = %d\n", emps_num);
    printf("SALARY = U$ %.2lf\n", salary);

    return 0;
}