#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int copiando (int frase[], int frasecopia[])
{
    int cont=0;

    while((frasecopia[cont]=frase[cont]) != '\0')
    {
        cont++;
    }
    
    return frasecopia;
}

int main (){

    int frase[100], frasecopia[100];

    printf("Informe uma frase qualquer:\n");
    gets(frase);

    copiando(frase, frasecopia);

    printf("Frase informada:\n%s\n", frase);

    printf("Copia da frase informada: \n%s\n", frasecopia);

    return 0;
}
