#include <stdio.h>

int main(){

    double grade1 = 0;
    double grade2 = 0;
    scanf("%lf", &grade1);
    scanf("%lf", &grade2);

    double MEDIA = ((grade1*3.5)+(grade2*7.5))/11;

    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}