#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dado () 
{
    int numSorteado;
    srand (time (NULL));
    numSorteado = (rand() % 6)+1;
    printf("O numero sorteado e: %d\n", numSorteado);
}

int main () 
{
    printf("Sorteando um numero aleatorio: \n");
    dado();

    return 0;
}