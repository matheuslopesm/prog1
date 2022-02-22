#include<stdio.h>
#define TAMANHO 2

int main ()
{
    float n1[TAMANHO], n2[TAMANHO], median[TAMANHO];

    vetor1(n1, n2);
    vetor2(n1, n2, median);
    vetor3(n1, n2, median);

    return 0;    
}

void vetor1(float n1[], float n2[])
{
    int cont;

    for(cont=0; cont<TAMANHO; cont++)
    {
        printf("Aluno (%d) - Informe a nota da P1:\n", cont+1);
        scanf("%f", &n1[cont]);

        printf("Aluno (%d) - Informe a nota da P2:\n", cont+1);
        scanf("%f", &n2[cont]);
    }
}

void vetor2(float n1[], float n2[], float median[])
{
    int cont;

    for(cont=0; cont<TAMANHO; cont++)
    {
        median[cont] = (n1[cont] + n2[cont])/2;
    }
}

void vetor3(float n1[], float n2[], float median[]){

    int cont;

    for(cont=0; cont<TAMANHO; cont++)
    {
        printf("\nAluno (%d)\n\tNota 1: %.2f\n\tNota 2: %.2f\n\tMedia:%.2f\n",cont+1, n1[cont], n2[cont], median[cont]);
    }
}