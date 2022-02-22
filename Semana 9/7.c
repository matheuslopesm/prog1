#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 3

typedef struct{
    int numero;
    float peso;
    float altura;
    char nome[100];
}jogador;

void cadastro(jogador *atleta, int qtd)
{
    int cont;
    for(cont = 0; cont < qtd; cont++)
    {
        printf("\nInforme o nome do atleta %d: \n", cont+1);
        fflush(stdin);
        gets(atleta[cont].nome);
        printf("\nInforme o numero da camisa do atleta %d: \n", cont+1);
        scanf("%d", &atleta[cont].numero);
        printf("\nInforme o peso do atleta %d: \n", cont+1);
        scanf("%f", &atleta[cont].peso);
        printf("\nInforme a altura do atleta %d: \n", cont+1);
        scanf("%f", &atleta[cont].altura);
    }
}

void exibir(jogador *atleta, int qtd)
{
    int cont;

    printf("\n------------------------------\n");

    for(cont = 0; cont < qtd; cont++)
    {
        printf("\nDados do jogador %d\n", cont+1);
        printf("Nome: %s\n", atleta[cont].nome);
        printf("Camisa: %d\n", atleta[cont].numero);
        printf("Peso: %.2f\n", atleta[cont].peso);
        printf("Altura: %.2f\n", atleta[cont].altura);
    }
    printf("\n------------------------------\n");
}

void jogador_pesado(jogador *atleta)
{
    int cont, ppesado;
    int psdo = 0;

    for(cont = 0; cont < TAM; cont++)
    {
        if(atleta[cont].peso > psdo)
        {
            psdo = atleta[cont].peso;
            ppesado = cont;
        }
    }

    printf("\nO jogador mais pesado e o Numero (%d)\n", atleta[ppesado].numero);
}

void jogador_baixinho(jogador *atleta)
{
    int cont, ppequeno;
    int ppqn = 9999999;

    for(cont = 0; cont < TAM; cont++)
    {
        if(atleta[cont].altura < ppqn)
        {
            ppqn = atleta[cont].altura;
            ppequeno = cont;
        }
    }

    printf("\nInicial do jogador mais baixinho e: (%c)\n", atleta[ppequeno].nome[0]);
}

int main()
{
    jogador atleta[TAM], pesado, baixo;
    cadastro(atleta, TAM);
    exibir(atleta, TAM);
    jogador_pesado(atleta);
    jogador_baixinho(atleta);

    return 0;
}
