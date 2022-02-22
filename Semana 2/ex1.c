#include<stdio.h>

int main (){

    int hora, minutos, horas_em_minutos, tempo_passado;
    hora=0;
    minutos=0;

    printf("Informe a hora atual: \n", hora);
    scanf("%d", &hora);
    printf("\nInforme os minutos atuais: \n", minutos);
    scanf("%d", &minutos);

    horas_em_minutos = hora * 60;
    tempo_passado = horas_em_minutos + minutos;

    printf("Os minutos passados (desde o inicio do dia) ate agora: %d \n", tempo_passado);

    return 0;
}

//Ok