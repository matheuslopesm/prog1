#include<stdio.h>

int main (){

    int numero;    

    printf("Informe um numero de 1 a 12: \n");
    scanf("%d", &numero);

    if((numero>=1) && numero<=12)
    {
        switch(numero)
        {
            case 1:
                printf("O mes e janeiro");
            break;
            case 2:
                printf("O mes e fevereiro");
            break;
            case 3:
                printf("O mes e marco");
            break;
            case 4:
                printf("O mes e abril");
            break;
            case 5:
                printf("O mes e maio");
            break;
            case 6:
                printf("O mes e junho");
            break;
            case 7:
                printf("O mes e julho");
            break;
            case 8:
                printf("O mes e agosto");
            break;
            case 9:
                printf("O mes e setembro");
            break;
            case 10:
                printf("O mes e outubro");
            break;
            case 11:
                printf("O mes e novembro");
            break;
            case 12: 
                printf("O mes e dezembro");
            break;
        }
    }
    else
    {
        printf("Numero invalido!");
    }
    return 0;
}

//Ok
