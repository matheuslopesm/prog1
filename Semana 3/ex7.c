#include<stdio.h>
#include<math.h>

int main (){

    int num, cont_pares, cont_impares, cont_numeros, soma_pares, soma_numeros;
    float media_pares, media_numeros;

    cont_pares=0;
    cont_impares=0;
    cont_numeros=0;
    media_pares=0;
    media_numeros=0;
    soma_pares=0;
    soma_numeros=0;

    printf("Informe um numero inteiro\nDigite '0' quando quiser parar de informar:\n");

    do
    {
        scanf("%d", &num);
        cont_numeros++;
        soma_numeros=soma_numeros+num;
        if(num%2==0)
        {
            cont_pares++;
            soma_pares=soma_pares+num;
        }
        else
        {
            cont_impares++;
        }
    }while(num!=0);
    media_pares=soma_pares/(cont_pares-1);
    media_numeros=soma_numeros/(cont_numeros-1);
    printf("A quantidade de pares e %d\n", (cont_pares-1));
    printf("A quantidade de impares e %d\n", cont_impares);
    printf("A media dos pares e %.2f\n", media_pares);
    printf("A media de todos os valores e %.2f\n", media_numeros);
    return 0;
}
