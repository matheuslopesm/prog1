#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char nome[50];
    int dia;
    int mes;
    int ano;
}dependente1;

typedef struct{
    char nome[50];
    int dia;
    int mes;
    int ano;
}dependente2;

typedef struct{
    char nome[50];
    int dia;
    int mes;
    int ano;
    char rua[50];
    int numero;
    char bairro[15];
    char cidade[50];
    dependente1 dp1;
    dependente2 dp2;
}dados;

void cadastracliente(dados *cliente, int qtd)
{
    int cont;

    printf("\n____________________________________________________________");
    for(cont = 0; cont < qtd; cont++)
    {
        printf("\nInforme o nome do cliente %d: \n", cont+1);
        fflush(stdin);
        gets(cliente[cont].nome);
        printf("\nInforme o dia de nascimento do cliente %d: \n", cont+1);
        scanf("%d", &cliente[cont].dia);
        printf("\nInforme o mes de nascimento do cliente %d: \n", cont+1);
        scanf("%d", &cliente[cont].mes);
        printf("\nInforme o ano de nascimento do cliente %d: \n", cont+1);
        scanf("%d", &cliente[cont].ano);
        printf("\nAgora voce vai informar o endereco do cliente!\n");
        printf("\nInforme a rua do cliente %d: \n", cont+1);
        fflush(stdin);
        gets(cliente[cont].rua);
        printf("\nInforme o numero da casa do cliente %d: \n", cont+1);
        scanf("%d", &cliente[cont].numero);
        printf("\nInforme o bairro do cliente %d: \n", cont+1);
        fflush(stdin);
        gets(cliente[cont].bairro);
        printf("\nInforme a cidade do cliente %d: \n", cont+1);
        gets(cliente[cont].cidade);
        printf("\nAgora voce vai informar os dados do dependente 1!\n");
        printf("\nInforme o nome do dependente 1 \n");
        fflush(stdin);
        gets(cliente[cont].dp1.nome);
        printf("\nInforme o dia de nascimento do dependente 1:\n");
        scanf("%d", &cliente[cont].dp1.dia);
        printf("\nInforme o mes de nascimento do dependente 1:\n");
        scanf("%d", &cliente[cont].dp1.mes);
        printf("\nInforme o ano de nascimento do dependente 1:\n");
        scanf("%d", &cliente[cont].dp1.ano);
        printf("\nAgora voce vai informar os dados do dependente 2!\n");
        printf("\nInforme o nome do dependente 2 \n");
        fflush(stdin);
        gets(cliente[cont].dp2.nome);
        printf("\nInforme o dia de nascimento do dependente 2:\n");
        scanf("%d", &cliente[cont].dp2.dia);
        printf("\nInforme o mes de nascimento do dependente 2:\n");
        scanf("%d", &cliente[cont].dp2.mes);
        printf("\nInforme o ano de nascimento do dependente 2:\n");
        scanf("%d", &cliente[cont].dp2.ano);
    }
    printf("\n____________________________________________________________");
}

int main (){

    dados *cliente;
    int n, cont;

    printf("\nInforme a quantidade de clientes que voce quer documentar: \n");
    scanf("%d", &n);

    cliente = (dados*) malloc(n * sizeof(dados));

    cadastracliente(cliente, n);

    printf("\nDados Cadastrados com Sucesso!\n");

    for(cont = 0; cont < n; cont++)
    {
        printf("\n**************************************************");
        printf("\n### Dados do cliente %d ###\n\n", cont+1);
        printf("Nome: %s - Data de Nascimento: %d/%d/%d", cliente[cont].nome, cliente[cont].dia, cliente[cont].mes, cliente[cont].ano);
        printf("\nEndereco: Rua %s, numero %i - Bairro: %s - Cidade: %s\n", cliente[cont].rua, cliente[cont].numero, cliente[cont].bairro, cliente[cont].cidade);
        printf("\nDados do Dependente 1 do cliente %d:\n\n", cont+1);
        printf("Nome: %s - Data de Nascimento: %d/%d/%d", cliente[cont].dp1.nome, cliente[cont].dp1.dia, cliente[cont].dp1.mes, cliente[cont].dp1.ano);
        printf("\n\nDados do Dependente 2 do cliente %d:\n\n", cont+1);
        printf("Nome: %s - Data de Nascimento: %d/%d/%d\n", cliente[cont].dp2.nome, cliente[cont].dp2.dia, cliente[cont].dp2.mes, cliente[cont].dp2.ano);
    }
    printf("\n**************************************************\n");
    
    free(cliente);
    return 0;
}



