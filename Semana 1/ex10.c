#include<stdio.h>

int main(){

    int hora, minutos, hora_para_minuto, minutos_totais;
    hora=0;
    minutos=0;
    printf("Informe SOMENTE a hora atual: %d \n", hora);
    scanf("%d", &hora);
    printf("Agora, informe SOMENTE os minutos atuais: %d \n", minutos);
    scanf("%d", &minutos);

    hora_para_minuto = hora * 60;
    minutos_totais=hora_para_minuto + minutos;

    printf("O tempo passado desde o início do dia, em minutos: %d \n", minutos_totais);

    return 0;      

}