#include<stdio.h>
#include<math.h>

int main (){

    int n, soma, cont;

    printf("Informe um numero inteiro: \n");
    scanf("%d", &n);
   
    for(cont=1; cont<=n; cont++)
    {
        soma=soma+cont;
    }
    printf("A soma dos numeros e: %d", soma);
    return 0;
}