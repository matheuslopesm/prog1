#include<stdio.h>

int main (){

    int numero;    

    printf("Informe um numero inteiro de 101 a 106: \n");
    scanf("%d", &numero);

    if((numero>=101) && numero<=106)
    {
        switch(numero)
        {
            case 101:
                printf("O cargo e: vendedor");
            break;
            case 102:
                printf("O cargo e: atendente");
            break;
            case 103:
                printf("O cargo e: auxiliar tecnico");
            break;
            case 104:
                printf("O cargo e: assistente");
            break;
            case 105:
                printf("O cargo e: coordenador de grupo");
            break;
            case 106:
                printf("O cargo e: gerente");
        }
    }
    else
    {
        printf("Numero invalido! Digite novamente.");
    }
    return 0;
}

//Ok
