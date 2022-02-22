#include<stdio.h>

#define MAX 10

int main (){

    float x, vetor[MAX];

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
        printf("\nEndereco [%d]: %.1f", cont+1, vetor[cont]);
    }

    return 0;
}