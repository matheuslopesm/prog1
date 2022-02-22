#include<stdio.h>
#include<string.h>

#include <stdio.h>
#include <string.h>

int main(){

    char frase[100];

    printf("Informe uma frase de no maximo 100 caracteres:\n");
    gets(frase);

    for (int cont=0; cont<100; cont++)
	{
        switch (frase[cont])
        {
            case 'a':
                frase[cont]='P';
            break;
            case 'e':
                frase[cont]='P';
            break;
            case 'i':
                frase[cont]='P';
            break;
            case 'o':
                frase[cont]='P';
            break;
            case 'u':
                frase[cont]='P';
            break;
            case 'A':
                frase[cont]='P';
            break;
            case 'E':
                frase[cont]='P';
            break;
            case 'I':
                frase[cont]='P';
            break;
            case 'O':
                frase[cont]='P';
            break;
            case 'U':
                frase[cont]='P';
            break;
        }
    }
    printf("\nNova palavra na linguagem do P:\n");
    puts(frase);
    return 0;
}