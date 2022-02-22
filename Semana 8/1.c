#include<stdio.h>

int main (){

    int i=15, j=16;

    int *pi, *pj;

    pi = &i;
    pj = &j;

    if (*pi > *pj)
    {
        printf("\nA variavel i e maior!\n\n");
        return;
    }
    printf("\nA variavel j e maior!\n\n");
}