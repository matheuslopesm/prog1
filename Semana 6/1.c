#include<stdio.h>
#include<string.h>

int strchar (char str[])
{
    int cont, aux;
    char c;

    aux = strlen(str);
    
    for(cont=0; cont<aux; cont++)
    {
        if(str[cont]=='c')
        {
            printf("A primeira ocorrencia de c ocorre na posicao %d.\n", cont+1);
            break;
        }
        if(cont==(aux-1))
        {
            return printf("Nao existe letra c aqui.\n");
        }
    }
    return 1;
}

int main (){

    char str[50], aux;

    printf("Digite uma frase de no maximo 50 caracteres:\n");
    fgets(str, 50, stdin);

    aux = strchar(str);

    return 0;
}
