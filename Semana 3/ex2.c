#include<stdio.h>

int main (){

    int num, cont, maior;
    
    cont=1;
    maior=num;
    printf("Informe 10 numeros inteiros: \n");

    for(cont=1; cont<=10; cont++)
    {
        scanf("%d", &num);
        if(num>maior)
        {
            maior=num;
        }
    }
    printf("O maior numero e %d\n", maior);
    return 0;
}