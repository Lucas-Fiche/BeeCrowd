#include <stdio.h>

int main(){
    int hours = 0;
    int km_per_hour = 0;
    double km_per_liter = 12.0;
    scanf("%d", &hours);
    scanf("%d", &km_per_hour);

    int distance = km_per_hour * hours;

    double liters = distance/km_per_liter;

    printf("%.3lf\n", liters);

    return 0;
}