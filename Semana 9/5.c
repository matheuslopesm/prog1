#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char nome[50];
    char esporte[15];
    int idade;
    float altura;
}dados;

int main (){

    dados *atleta;
    int cont, n;

    int palto, pvelho;
    float alt = 0, velho = 0;

    printf("\nInforme a quantidade de atletas que voce quer documentar: \n");
    scanf("%d", &n);

    atleta = (dados*) malloc(n * sizeof(dados));

    if(atleta != NULL)
    {
        for(cont = 0; cont < n; cont++)
        {
            printf("\nInforme o nome do atleta %d: \n", cont+1);
            getchar();
            fgets(atleta[cont].nome, 50, stdin);
            printf("\nInforme o esporte favorito do atleta %d: \n", cont+1);
            fgets(atleta[cont].esporte, 15, stdin);
            printf("\nInforme a idade do atleta %d: \n", cont+1);
            scanf("%d", &atleta[cont].idade);
            printf("\nInforme a altura do atleta %d: \n", cont+1);
            scanf("%f", &atleta[cont].altura);
        }
    }
    else
    {
        printf("\nErro na alocacao de memoria\n");
        return -1;
    }

    for(cont = 0; cont < n; cont++)
    {
        if(atleta[cont].altura > alt)
        {
            alt = atleta[cont].altura;
            palto = cont;
        }
    }

    for(cont = 0; cont < n; cont++)
    {
        if(atleta[cont].idade > velho)
        {
            velho = atleta[cont].idade;
            pvelho = cont;
        }
    }

    printf("\n----- Dados do atleta mais alto -----\n");
    printf("Nome: %s\n", atleta[palto].nome);
    printf("Esporte favorito: %s\n", atleta[palto].esporte);
    printf("Idade: %d\n", atleta[palto].idade);
    printf("Altura: %.2f\n", atleta[palto].altura);
    printf("---------------------------------------\n");

    printf("\n----- Dados do atleta mais velho -----\n");
    printf("Nome: %s\n", atleta[pvelho].nome);
    printf("Esporte favorito: %s\n", atleta[pvelho].esporte);
    printf("Idade: %d\n", atleta[pvelho].idade);
    printf("Altura: %.2f\n", atleta[pvelho].altura);
    printf("---------------------------------------\n");

    free(atleta);

    return 0;
}
