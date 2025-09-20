#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);

    int teste1 = (a + b + abs(a-b))/2;
    int teste2 = (teste1 + c + abs(teste1-c))/2;

    if (teste1 > teste2){
        printf("%d eh o maior\n", teste1);
    } else {
        printf("%d eh o maior\n", teste2);
    }
    
    return 0;
}