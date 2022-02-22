#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char palavra[50], palavrainv[50];
    int teste=0;

    printf("\nInforme uma palavra (maximo: 50 caracteres):\n");
    gets(palavra);

    strcpy(palavrainv, palavra);
    strlwr(palavra);
    strlwr(palavrainv);
    strrev(palavrainv);
    teste=strcmp(palavra, palavrainv);

    printf("\nA palavra invertida e \n%s\n", palavrainv);

    if(teste!=0)
    {
        printf("\nNao e palindromo.\n");
    }
    else
    {
        printf("\nPalindromo.\n");
    }

    return 0;
}