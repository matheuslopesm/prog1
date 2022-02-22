#include<stdio.h>
#include<string.h>

void strins (char str[], char c, int pos)
{
    int cont, max;
    char str2, i;

    max = strlen(str);
    i = str[pos];
    str[pos]=c;

    for(cont=pos+1; cont<=max+1; cont++)
    {
        str2=str[cont];
        str[cont]=i;
        i=str2;
    }
}

int main (){

    char palavra[50], caractere;
    int pos;

    printf("Digite uma palavra de no maximo 50 caracteres:\n");
    fgets(palavra, 50, stdin);

    printf("\nInforme o caractere:\n");
    scanf("%c", &caractere);

    printf("\nInforme a posicao que voce deseja inserir a letra c:\n");
    scanf("%d", &pos);

    strins(palavra, caractere, pos);
    printf("%s", palavra);
}