#include<stdio.h>

int main (){

    int fatorial, n;

    printf("Informe um valor para calcular o fatorial: \n");
    scanf("%d", &n);

    for(fatorial=1; n>1; n=n-1)
    {
        fatorial=fatorial*n;
    }
    printf("\nO fatorial do numero que voce informou e: \n%d", fatorial);
    return 0;
}