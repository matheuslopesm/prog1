#include <stdio.h>

int main(){

    int a, b, auxiliar, i, n, fibo;
    a = 0;
    b = 1;

    printf("Serie de Fibonacci\n");
    printf("Digite um numero para os primeiros termos da serie Fibonacci ");
    scanf("%d", &fibo);
    printf("%d\n", b);


    for(i = 0; i < fibo; i++)
    {   
        auxiliar = a + b;
        a = b;
        b = auxiliar;
        printf("%d\n", auxiliar);
    }
    return 0;
}