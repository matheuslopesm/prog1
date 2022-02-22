#include<stdio.h>

int main (){

    int i, j;

    int *pi, *pj;

    printf ("\nInforme o valor de i:\n");
    scanf("%i", &i);

    printf("\nInforme o valor de j:\n");
    scanf("%i", &j);

    pi = &i;
    pj = &j;

    if (*pi > *pj)
    {
        printf("\nA variavel i e maior!\n\n");
        return;
    }
    printf("\nA variavel j e maior!\n\n");
}