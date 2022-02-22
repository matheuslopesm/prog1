#include <stdio.h>

#define NUM_ALUNOS 4 
#define NUM_COLUNAS 3 

void le_notas(float controle[][NUM_COLUNAS])
{
    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        for (int j = 0; j < NUM_COLUNAS - 1; j++)
        {
            printf("Informe a nota %d do aluno %d: ", (j + 1), (i + 1));
            scanf("%f", &controle[i][j]);
        }
    }
}

void calcula_media(float controle[][NUM_COLUNAS])
{
    float adiciona = 0;

    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        adiciona = 0;
        for (int j = 0; j < NUM_COLUNAS - 1; j++)
        {
            adiciona += controle[i][j];
        }
        controle[i][NUM_COLUNAS - 1] = adiciona / (NUM_COLUNAS - 1);
    }
}

void exibe_relatorio(float controle[][NUM_COLUNAS])
{
    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        printf("Aluno %d\n\n", i + 1);
        for (int j = 0; j < NUM_COLUNAS - 1; j++)
        {
            printf("\tProva %d: %.2f\n", (j + 1), controle[i][j]);
        }
        printf("\tMedia: %.2f\n", controle[i][NUM_COLUNAS - 1]);
    }
}

void exibe_media_global(float controle[][NUM_COLUNAS])
{
    float soma, media;
    int i;
    for (i = 0; i < NUM_ALUNOS; i++)
    {
        soma += controle[i][2];
    }
    media = soma / NUM_ALUNOS;
    printf("Media global e: %.2f", media);
}

int main()
{
    float controle[NUM_ALUNOS][NUM_COLUNAS];
    le_notas(controle);
    calcula_media(controle);
    exibe_relatorio(controle);
    return 0;
}
