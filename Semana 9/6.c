#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char rua[50];
    int numero;
    char bairro[15];
    char cidade[50];
}endereco;

typedef struct{
    char nome[50];
    char curso[30];
    int semestre;
    char nascimento[10];
    endereco end;
}aluno;

void cadastra_alunos(aluno *pessoa, int qtd)
{
    int cont;

    for(cont = 0; cont < qtd; cont++)
    {
        printf("\nInforme o nome do aluno %d: \n", cont+1);
        fflush(stdin);
        gets(pessoa[cont].nome);
        printf("\nInforme o curso do aluno %d: \n", cont+1);
        gets(pessoa[cont].curso);
        printf("\nInforme a data de nascimento do aluno %d: \n", cont+1);
        gets(pessoa[cont].nascimento);
        printf("\nInforme o semestre do aluno %d: \n", cont+1);
        scanf("%d", &pessoa[cont].semestre);
        printf("\nAgora voce vai informar o endereco do aluno!\n");
        printf("\nInforme a rua do aluno %d: \n", cont+1);
        fflush(stdin);
        gets(pessoa[cont].end.rua);
        printf("\nInforme o numero da casa do aluno %d: \n", cont+1);
        scanf("%d", &pessoa[cont].end.numero);
        printf("\nInforme o bairro do aluno %d: \n", cont+1);
        fflush(stdin);
        gets(pessoa[cont].end.bairro);
        printf("\nInforme a cidade do aluno %d: \n", cont+1);
        gets(pessoa[cont].end.cidade);
    }
}

void exibe_alunos(aluno *pessoa, int qtd)
{
    int cont;
    for(cont = 0; cont < qtd; cont++)
    {
        printf("\n\n### Dados do aluno %d ###\n\n", cont+1);
        printf("Nome: %s - %s - semestre %d", pessoa[cont].nome, pessoa[cont].curso, pessoa[cont].semestre);
        printf("\nEndereco: Rua %s, numero %i - Bairro: %s - Cidade: %s\n", pessoa[cont].end.rua, pessoa[cont].end.numero, pessoa[cont].end.bairro, pessoa[cont].end.cidade);
    }
}

aluno aluno_mais_antigo(aluno *pessoa, int qtd)
{
    int cont, maistempo, tempo = 0;
    for(cont = 0; cont < qtd; cont++)
    {
        if(pessoa[cont].semestre > tempo)
        {
            tempo = pessoa[cont].semestre;
            maistempo = cont;
        }
    }

    return pessoa[maistempo];
}

void exibe_dados_aluno (aluno pessoa){
    printf("\n\n*** Aluno mais antigo ***\n\n");
    printf("Nome: %s - %s - semestre %i", pessoa.nome, pessoa.curso, pessoa.semestre);
    printf("\nEndereco: Rua %s, numero %i - Bairro %s - Cidade: %s\n\n", pessoa.end.rua, pessoa.end.numero, pessoa.end.bairro, pessoa.end.cidade);
}

int main (){

    aluno *pessoa, veterano;
    int n;

    printf("\nInforme a quantidade de alunos que voce quer documentar: \n");
    scanf("%d", &n);

    pessoa = (aluno*) malloc(n * sizeof(aluno));

    cadastra_alunos(pessoa, n);
    printf("\nDados Cadastrados com Sucesso!\n");
    exibe_alunos(pessoa, n);
    veterano = aluno_mais_antigo(pessoa, n);
    exibe_dados_aluno(veterano);
    
    free(pessoa);
    return 0;
}
