#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 100

void substitui_caracteres(char str[TAM], char a, char b)
{
    for (int cont=0; cont<TAM; cont++)
	{
        switch (str[cont])
        {
            case 'a':
                str[cont]='b';
            break;
        }
    }
    printf("\nA nova frase, apos substituir a letra a por b:\n");
    puts(str);
}

int main (){

    char str[TAM], a, b;

    printf("\nInforme uma frase de ate 100 caracteres!\n");
    gets(str);

    substitui_caracteres(str, a, b);

    return 0;
}