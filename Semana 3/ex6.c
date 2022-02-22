#include<stdio.h>
#include<math.h>

int main (){

    int cont_numeros, cont_positivos, cont_negativos;
    float num, pct_positivos, pct_negativos, media, soma_numeros;

    cont_positivos=0;
    cont_negativos=0;
    cont_numeros=0;
    soma_numeros=0;
    pct_positivos=0;
    pct_negativos=0;

    printf("Informe um valor qualquer\nDigite '0' quando desejar parar: \n");

    do
    {
        scanf("%f", &num);
        cont_numeros++;
        soma_numeros=soma_numeros+num;
        if(num>=0)
        {
            cont_positivos++;
        }
        else
        {
            cont_negativos++;
        }
    }while(num!=0);
    media=soma_numeros/cont_numeros;
    pct_positivos=100-((cont_negativos*100)/(cont_numeros-1));
    pct_negativos=(cont_negativos*100)/(cont_numeros-1);
    printf("A media dos numeros e %.2f\n", media);
    printf("O numero de valores positivos e %d\n", cont_positivos-1); //Filipe, coloquei o -1 porque n achei outra forma de tirar o zero do conjunto! 
    printf("O numero de valores negativos e %d\n", cont_negativos);
    printf("O percentual de valores positivos e %.2f\n", pct_positivos);
    printf("O percentual de valores negativos e %.2f\n", pct_negativos);
    return 0;
}