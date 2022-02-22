#include<stdio.h>

int main (){

    int num, cont;

    printf("\nInforme um numero inteiro: \n");
    scanf("%d", &num);

    int somatorio_numero();

    printf("Soma: %d \n", somatorio_numero(num, cont));
    return 0;
}

int somatorio_numero(int num, int cont)
{
    int somatorio;
    do
    {
       cont++;
       somatorio=somatorio+cont; 
    }while(cont<num);
    return somatorio;
}