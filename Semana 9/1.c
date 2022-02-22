#include<stdio.h>
#include<string.h>

struct dados{
    char nome[50];
    int idade;
    char endereco[100];
};

int main (){

    struct dados pessoa; 

    printf("\nInforme o nome da pessoa:\n");
    gets(pessoa.nome);

    printf("\nInforme o endereco:\n");
    gets(pessoa.endereco);

    printf("\nInforme a idade:\n");
    scanf("%d", &pessoa.idade);

    printf("-------------------------\n");
    printf("Informacoes dessa pessoa:\n");
    printf("Nome: ");
    puts(pessoa.nome);
    printf("Idade: ");
    printf("%d\n", pessoa.idade);
    printf("Endereco: ");
    puts(pessoa.endereco);
    printf("\n");
    printf("-------------------------\n");

    return 0;
}