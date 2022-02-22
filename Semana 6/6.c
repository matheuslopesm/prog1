#include <stdio.h>
#include <string.h>

int main(){

    char frase[100];
    int num, vogais=0;

    printf("Informe uma frase de no maximo 100 caracteres:\n");
    gets(frase);

    num = strlen(frase);

    for (int cont=0; cont<num; cont++)
	{
        switch (frase[cont])
        {
            case 'a':
                vogais++;
            break;
            case 'e':
                vogais++;
            break;
            case 'i':
                vogais++;
            break;
            case 'o':
                vogais++;
            break;
            case 'u':
                vogais++;
            break;
            case 'A':
                vogais++;
            break;
            case 'E':
                vogais++;
            break;
            case 'I':
                vogais++;
            break;
            case 'O':
                vogais++;
            break;
            case 'U':
                vogais++;
            break;
        }
    }
    printf("\nQuantidade de vogais: %i \n", vogais);
    return 0;
}