#include <stdio.h>
#include <math.h>

int main (){
    int x, antecessor, sucessor;
    printf("Informe um numero inteiro: %d \n", x);
    scanf("%d", &x);
    antecessor = x-1;
    sucessor = x+1;
    printf("Seu numero: %d \n", x);
    printf("O antecessor e o sucessor, respectivamente, sao: %d %d \n", antecessor, sucessor);
    scanf("%d %d", &antecessor, &sucessor);

    return 0;
}