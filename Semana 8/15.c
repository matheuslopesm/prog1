#include<stdio.h>
#include<stdlib.h>

int *multiplica_vetores(int *a, int *b, int qtd)
{
    int cont, *avet = a, *bvet = b;
    int *cp = NULL, *cvet;

    cvet = (int *) malloc(qtd * sizeof(int));

    cp = cvet;
    for(cont=0; cont < qtd; cont++)
    {
        *cp = *avet * *bvet;
        cp++;
        avet++;
        bvet++;
    }

    return cvet;
}

int main (){

    int *p1, *p2, cont, n;
    int *vet1, *vet2;

    printf("\nPrimeiro, informe quantos elementos voce quer: ");
    scanf("%d", &n);

    printf("\nAgora voce vai informar dados dos 2 vetores.\n");

    vet1 = (int *) malloc(n * sizeof(int));
    vet2 = (int *) malloc(n * sizeof(int));

    if((p1 == NULL) || (p2 == NULL))
    {
        printf("\nErro durante a alocacao\n");
        return -1;
    }
    else
    {
        p1 = vet1;
        for(cont = 0; cont < n; cont++)
        {
            printf("\nInforme o valor da posicao %d - Vetor 1: ", cont);
            scanf("%d", p1);
            p1++;
        }

        p2 = vet2;
        for(cont = 0; cont < n; cont++)
        {
            printf("\nInforme o valor da posicao %d - Vetor 2: ", cont);
            scanf("%d", p2);
            p2++;
        }
    }

    int *mult = multiplica_vetores(vet1, vet2, n);

    p2 = mult;
    printf("\nO vetor e:\n{");
    for(cont = 0; cont < n; cont++)
    {
        printf(" %d ", *p2); 
        p2++;
    }
    printf("}\n");

    free(vet1);
    free(vet2);
    free(mult);

    return 0;
}
