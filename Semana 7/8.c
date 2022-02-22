#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define linhas 4
#define colunas 4

//Filipe, na parte do maior/menor e posição eu não consegui! :(

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

int maioreposicao (int matriz[][colunas])
{
    int i, j, maior=1;
    
    for(i=0; i<linhas; i++)
    {
        for(j=0; j<colunas; j++)
        {
            maior = matriz[0][0];
            
            if(matriz[i][j] >= maior)
            {
                maior = matriz[i][j];
            }
        }
    }

    return maior;
}

int menoreposicao (int matriz[][colunas])
{
    int i, j, menor=1;

    for(i=0; i<linhas; i++)
    {
        for(j=0; j<colunas; j++)
        {         
            menor = matriz[0][0];

            if(matriz[i][j] <= menor)
            {
                menor = matriz[i][j];
            }
        }
    }

    return menor;
}

int main (void)
{
    int matriz[linhas][colunas], maior, i, j, menor;

    printf("Preenchimento de matriz!\n");
    matriz_aleatoria(matriz, 10);

    imprime_matriz(matriz);

    maioreposicao(matriz);
    printf("\nMaior valor: %d\n", maior);
    printf("Posicao do maior: [%d][%d]\n", i, j);

    menoreposicao(matriz);
    printf("\nMenor valor: %d\n", menor);
    printf("Posicao do menor: [%d][%d]\n", i, j);

    return 0;
}