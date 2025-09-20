#include <stdio.h>
#include <math.h>

int main(){
    int R = 0;
    double pi = 3.14159;

    scanf("%d", &R);
    double volume = (4/3.0)*pi*(pow(R, 3));

    printf("VOLUME = %.3lf\n", volume);
    
    return 0;
}