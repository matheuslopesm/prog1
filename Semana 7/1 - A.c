#include<stdio.h>

int main ()
{
    int linha, coluna;

    for(linha = 0; linha < 10; linha++)
    {
        for(coluna = 0; coluna < ((10-linha)); coluna++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
