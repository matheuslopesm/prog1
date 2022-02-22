#include<stdio.h>
#include<string.h>

void tiraespaco (char frase[100])
{
    char semespaco[100], fraseinverso[100];
    int aux=0, cont=0, teste;

    for(cont=0; cont<100; cont++)
    {
        if (frase[cont] == ' ')
        {
            cont++;
        }
        semespaco[aux] = frase[cont];
        aux++;
    }

    strcpy(fraseinverso, semespaco);
    strrev(fraseinverso);
    teste = strcmp(semespaco, fraseinverso);

    if(teste == 0)
    {
        printf("\nE palindromo.\n");
    }
    else
    {
        printf("\nNao e Palindromo.\n");
    }
}

int main()
{
    char frase[100], fraseinverso[100];
    int teste;

    printf("\nInforme uma frase:\n");
    gets(frase);

    tiraespaco (frase);

    return 0;
}

