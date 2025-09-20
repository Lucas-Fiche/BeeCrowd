#include <stdio.h>

int main(){
    int value = 0;
    scanf("%d", &value);
    int initial_value = value;

    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int qt_notas[7];

    for (int i = 0; i <= 6; i++){
        qt_notas[i] = value / notas[i];
        value = value - (notas[i] * qt_notas[i]);
    }

    printf("%d\n", initial_value);
    for (int j = 0; j <= 6; j++){
        printf("%d nota(s) de R$ %d,00\n", qt_notas[j], notas[j]);
    }
    
    return 0;
}