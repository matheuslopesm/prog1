#include<stdio.h>
#include<string.h>

void elimina_espacos (char frase[100])
{
    char semespaco[100];
    int aux=0, cont=0;

    for(cont=0; cont<100; cont++)
    {
        if (frase[cont] == ' ')
        {
            cont++;
        }
        semespaco[aux] = frase[cont];
        aux++;
    }

    printf("A nova frase sem espacos e: \n%s\n", semespaco);
}

int main()
{
    char frase[100], fraseinverso[100];

    printf("\nInforme uma frase:\n");
    gets(frase);

    elimina_espacos (frase);

    return 0;
}