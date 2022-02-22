#include<stdio.h>
#define TAMANHO 20

void vetor1(float num[])
{
    int cont;

    printf("\nVoce informara 20 numeros!\n");

    for(cont=0; cont<TAMANHO; cont++)
    {
        printf("Informe o numero %d:\n", cont+1);
        scanf("%f", &num[cont]);
    }
}

void vetor2(float num[])
{
    int cont;

    printf("O vetor e:\n");

    for(cont=0; cont<TAMANHO; cont++)
    {
        printf("%.1f ", num[cont]);
    }
}

void vetor3(float num[])
{
    int i, cont;

    for(cont=0; cont<TAMANHO/2; cont++)
    {
        i=num[cont];
        num[cont]=num[TAMANHO-cont];
        num[TAMANHO-cont]=i;
    }
}

void vetor4(float num[])
{
    int cont;
    
    printf("\nO novo vetor e:\n");
    for(cont=0; cont<TAMANHO; cont++)
    {
        printf("%.1f ", num[cont+1]);
    }
}

int main (){

    float num[TAMANHO];

    vetor1(num);
    vetor2(num);
    vetor3(num);
    vetor4(num);
    return 0;
}

