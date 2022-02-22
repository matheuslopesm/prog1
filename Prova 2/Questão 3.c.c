#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define COL 4
#define LIN 4

void soma_AcomB(int matrizAcomB[][COL], int matrizA[][COL], int matrizB[][COL])
{
    int i, j;

    for(i=0; i < LIN; i++)
    {
        for(j=0; j < LIN; j++)
        {
            matrizAcomB[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void matrizresultante(int matrizresult[][COL], int matrizAcomB[][COL], int matrizC[][COL])
{
    int i, j;

    for(i=0; i < LIN; i++)
    {
        for(j=0; j < LIN; j++)
        {
            matrizresult[i][j] = matrizAcomB[i][j] * matrizC[i][j];
        }
    }
}

int main()
{
    int matrizA[LIN][COL], matrizB[LIN][COL], matrizC[LIN][COL], matrizresult[LIN][COL], matrizAcomB[LIN][COL];
    
    printf("\nPrimeiro voce vai informar os dados da Matriz A:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Informe o valor da posicao [%d, %d] da A:\n", i+1, j+1);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("\nAgora vai informar os dados da Matriz B:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Informe o valor da posicao [%d, %d] da B:\n", i+1, j+1);
            scanf("%d", &matrizB[i][j]);
        }
    }

    printf("\nAgora informe os dados da Matriz C:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Informe o valor da posicao [%d, %d]:\n", i+1, j+1);
            scanf("%d", &matrizC[i][j]);
        }
    }

    soma_AcomB(matrizAcomB, matrizA, matrizB);
    matrizresultante(matrizresult, matrizAcomB, matrizC);

    printf("Matriz Resultante e:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %d ", matrizresult[i][j]);
        }
        printf("\n");
    }

    return 0;
}




