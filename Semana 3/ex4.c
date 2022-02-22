#include<stdio.h>

int main (){

    int n, x, intervalo, fora_intervalo; 

    intervalo=0;
    fora_intervalo=0;

    printf("Informe os numeros: \n");

    for(x=0;x<10; x++)
    {
        scanf("%d", &n);
        if(n>=10 && n<=20)
        {
            intervalo=intervalo+1;
        }
        else
        {
            fora_intervalo=fora_intervalo+1;
        }    
    }
    printf("Quantidade de numeros no intervalo [10,20]: %d\n", intervalo);
    printf("Quantidade de numeros fora do intervalo: %d\n", fora_intervalo);
    return 0;
}