#include<stdio.h>
#include<stdlib.h>

int main (){

    int *pt, n, *vetor, cont;

    printf("\nInforme um valor (inteiro positivo): \n");
    scanf("%d", &n);

    while(n < 0)
    {
        printf("Numero negativo nao e permitido. Informe novamente:\n");
        scanf("%d", &n);
    }
    printf("\nValor valido!\n");

    vetor = (int *) malloc(n * sizeof(int));
    pt = vetor;
    
    if(pt == NULL)
    {
        printf("\nErro durante a alocacao\n");
        return -1;
    }
    else
    {    
        for(cont = 0; cont < n; cont++)
        {
            printf("Informe o valor da posicao %d: ", cont);
            scanf("%d", pt);
            pt++;
            while(pt < 1)
            {
                printf("Informe o valor da posicao %d NOVAMENTE: ", cont);
                scanf("%d", pt);
            }
        }

        pt = vetor;    
        printf("\nO vetor e:\n{");
        for(cont = 0; cont < n; cont++)
        {
            printf(" %d ", *pt);
            pt++;
        }
        printf("}\n");
    }

    free(pt);

    return 0;
}

