#include<stdio.h>

int main (){

    int num[20], num_par=0, num_impar=0, cont;

    printf("\nVoce informara 20 numeros inteiros.\n");

    for(cont=0; cont<20; cont++)
    {
        printf("Informe o numero %d:\n", cont+1);
        scanf("%d", &num[cont]);

        if(num[cont] % 2 == 0)
        {
            num_par++;
        }
        else
        {
            num_impar++;
        }
    }
    printf("\nExistem %d pares, e %d impares nesse intervalo informado.\n", num_par, num_impar);
    return 0;
}