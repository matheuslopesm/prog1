#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define linhas 3
#define colunas 4

void matriz_aleatoria (int matriz[][colunas], int maximo)
{
    int i, j;
    srand(time(NULL));

    for(i=0; i<linhas; i++)
    {
        for(j=0; j<colunas; j++)
        {
            matriz[i][j] = rand()%maximo;
        }
    }
}

void imprime_matriz (int matriz[][colunas])
{
    int i, j;
    
    for(i=0; i<linhas; i++)
    {
        for(j=0; j<colunas; j++)
        {
            if(j == 0 && i != 0)
            {
                printf(" %d,", matriz[i][j]);
            }
            else 
            {
                if(i==linhas-1 && j == colunas-1)
                {
                    printf("%d", matriz[i][j]);
                }
                else
                {
                    printf("%d,", matriz[i][j]);
                }
            }
        }
    }
    printf("\n");
}

int soma_matriz (int matriz[][colunas])
{
    int i, j, soma=0;

    for(i=0; i<linhas; i++)
    {
        for(j=0; j<colunas; j++)
        {
            soma = soma + matriz[i][j];
        }
    }
    return soma;
}

int mult_matriz (int matriz[][colunas])
{
    int i, j, mult=1;

    for(i=0; i<linhas; i++)
    {
        for(j=0; j<colunas; j++)
        {
            mult = mult * matriz[i][j];
        }
    }
    return mult;
}

int main (void)
{
    int matriz[linhas][colunas], soma, mult;

    printf("Preenchimento de matriz!\n");
    matriz_aleatoria(matriz, 10);

    imprime_matriz(matriz);

    soma = soma_matriz(matriz);
    printf("Soma da matriz: %d\n", soma);

    mult = mult_matriz(matriz);
    printf("Multiplicacao da matriz: %d\n", mult);
    return 0;
}