#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int elementos[5];
    int *pt = NULL;
    int cont, mult = 0;

    pt = (int*) malloc(5 * sizeof(int));

    if(pt == NULL)
    {
        printf("\nErro durante a alocacao\n");
        return -1;
    }
    else
    {
        pt = elementos;
        for(cont = 0; cont < 5; cont++)
        {
            printf("\nInforme o valor da posicao %d: \n", cont);
            scanf("%d", pt);
            pt++;   
        }

        pt = elementos;
        printf("\nO novo vetor e:\n{");
        for(cont = 0; cont < 5; cont++)
        {
            mult = (*pt) * 2;
            printf(" %d ", mult);
            pt++;
        }  
        printf("}\n");
    }

    free(pt);

    return 0;
}

