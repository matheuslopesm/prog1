#include <stdio.h>
#define TAMANHO 3

int main()
{
    int vet[TAMANHO];
    
    informa_indice(vet);
    mostra_vetor(vet);
    altera_vetor(vet);
    mostra_vetornovo(vet);
    return 0;
}

void informa_indice(int vet[])
{
    for(int cont=0; cont<TAMANHO; cont++)
    {
        printf("Informe o indice %d\n", cont+1);
        scanf("%d", &vet[cont+1]);
    }
}

void mostra_vetor(int vet[])
{
    for(int cont=0; cont<TAMANHO; cont++)
    {
        printf("Vetor do indice informado (%d): %d\n", cont+1, vet[cont+1]);
    }
}

void altera_vetor(int vet[])
{
    vet[1]=-1;
    vet[2]=10;
    vet[3]=15;
}

void mostra_vetornovo(int vet[])
{
    printf("\n\tEsse e um novo vetor\n");
    for(int cont=0; cont<TAMANHO; cont++)
    {
        printf("O novo vetor do indice (%d): %d\n", cont+1, vet[cont+1]);
    }
}


