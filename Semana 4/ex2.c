#include<stdio.h>

//Variaveis globais: (i , j) foram decladas no início do algoritmo,
//são visíveis, ou seja, podem ser utilizadas em todos os algoritmos.

//Variaveis locais: (k, ra, p, q, c, soma) foram declaradas em subalgoritmos,
//e mesmo que uma ou outra fosse declarada em outro subalgoritmo, o algoritmo 
//principal nao poderá utiliza-la se não declarar ela também.


int soma1 (int q, int c);
int soma2(int ra);

int i=10;
int j=20;

int main ()
{
    int i, k, ra, p;

    p=10;
    ra=5;

    for(i=0; i<3; i++)
    {
        k=soma1(ra, p);
        ra=soma2 (k);
        printf("%d, %d\n", ra, k);
    }
    return 0;
}

int soma1(int q, int c)
{
    int soma=q+i+c;
    return soma;
}
int soma2(int ra)
{
    int k=j;
    ra=ra+k;
    return ra;
}