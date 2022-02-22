#include<stdio.h>

#define MAX 10

//A diferença é que o double imprime mais casas decimais porque ocupa 8 bytes
//na memória do PC, tem precisão dupla, com normalmente o dobra da capacidade
//de uma variável do tipo float.

int main (){

    float x;
    
    double vetor[MAX];

    float *px;

    for(int cont=0; cont<MAX; cont++)
    {
        printf("\nInforme o numero [%d]:", cont+1);
        scanf("%f", &x);
        px = &x;
        vetor[cont] = *px;
    }

    for(int cont=0; cont<10; cont++)
    {
        printf("\nEndereco [%d]: %lf", cont+1, vetor[cont]);
    }

    return 0;
}