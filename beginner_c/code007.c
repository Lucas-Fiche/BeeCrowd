#include <stdio.h>

int main(){
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    int result = (A*B - C*D);

    printf("DIFERENCA = %d\n", result);
    return 0;
}