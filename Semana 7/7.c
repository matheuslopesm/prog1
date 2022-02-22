#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define linhas 3
#define colunas 6

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

int mult_valores (int matriz[][colunas])
{
    int i, j, valor;

    scanf("%d", &valor);
    
    for(i=0; i<linhas; i++)
    {
        for(j=0; j<colunas; j++)
        {
            matriz[i][j] = (matriz[i][j]) * valor;
        }
    }
}

void imprime_novamatriz (int matriz[][colunas])
{
    int i, j;
    
    for(i=0; i<linhas; i++)
    {
        for(j=0; j<colunas; j++)
        {
           printf("%d,", matriz[i][j]);
        }
    }
    printf("\n");
}

int main (void)
{
    int matriz[linhas][colunas], valor;

    printf("Preenchimento de matriz!\n");
    matriz_aleatoria(matriz, 10);

    imprime_matriz(matriz);

    printf("\nInforme um valor de multiplicacao:\n");
    mult_valores(matriz);

    printf("Nova matriz e:\n");
    imprime_novamatriz (matriz);

    return 0;
}