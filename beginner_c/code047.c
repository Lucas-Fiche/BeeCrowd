#include <stdio.h>

void calcular_tempo(int *duracao_horas, int *duracao_minutos, int total_minutos){
    *duracao_horas = total_minutos/60;
    *duracao_minutos = total_minutos%60;
}
   
int main(){
    int hora_inicial, minuto_inicial, hora_final, minuto_final, total_minutos, duracao_horas, duracao_minutos;
    scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);

    int tempo_inicial_minutos = (hora_inicial * 60) + minuto_inicial;
    int tempo_final_minutos = (hora_final * 60) + minuto_final;

    if (tempo_inicial_minutos == tempo_final_minutos){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else {
        if (tempo_final_minutos > tempo_inicial_minutos) {
            total_minutos = tempo_final_minutos - tempo_inicial_minutos;
            calcular_tempo(&duracao_horas, &duracao_minutos, total_minutos);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_horas, duracao_minutos);
        } else if (tempo_final_minutos < tempo_inicial_minutos) {
            total_minutos = (1440 - tempo_inicial_minutos) + tempo_final_minutos;
            calcular_tempo(&duracao_horas, &duracao_minutos, total_minutos);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_horas, duracao_minutos);
        }
    }

    return 0;
}