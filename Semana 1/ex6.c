#include<stdio.h>
#include<stdlib.h>

int main(){

    int A, B, C;
    A=0;
    B=0;
    C=0;
    printf("Informe o valor de A: %d\n", A);
    scanf("%d", &A);
    printf("Informe o valor de B: %d\n", B);
    scanf("%d", &B);
    printf ("O valor de A e: %d\n", A);
    printf ("O valor de B e: %d\n", B);

    C=A;
    A=B;
    B=C;
    printf("O novo valor de A e: %d\n", A);
    printf("O novo valor de B e: %d\n", B);
    return 0;
}