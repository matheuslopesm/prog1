#include<stdio.h>

int main ()
{
    int linha, coluna, max=1;

    for(linha = 0; linha < 10; linha++)
    {
        for(coluna = 0; coluna < max; coluna++)
        {
            printf("*");
        }
        printf("\n");
        max++;
    }

    return 0;
}