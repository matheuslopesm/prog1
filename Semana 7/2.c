#include<stdio.h>

int main (){

    int dado1, dado2, dado3, cont=0;

    for(dado1=1; dado1<=6; dado1++)
    {
        for(dado2=1; dado2<=6; dado2++)
        {
            for(dado3=1; dado3<=6; dado3++)
            {
                cont++;
                printf("Possivel jogada %d: (%d, %d, %d)\n", cont, dado1, dado2, dado3);
            }
        }
    }
    printf("\n");

    return 0;
}