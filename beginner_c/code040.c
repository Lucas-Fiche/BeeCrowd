#include <stdio.h>

int main(){

    float N1 = 0, N2 = 0, N3 = 0, N4 = 0;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    float media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1))/10;
    printf("Media: %.1f\n", media);

    if (media >= 7.0){
        printf("Aluno aprovado.\n");
    } else if (media >= 5.0 && media <= 6.9){
        printf("Aluno em exame.\n");
        float nota_exame = 0.0;
        scanf("%f", &nota_exame);
        printf("Nota do exame: %.1f\n", nota_exame);
        float nova_media = (nota_exame + media)/2;
        if (nova_media >= 5.0){
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", nova_media);
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}