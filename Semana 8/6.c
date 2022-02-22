#include<stdio.h>
#include<stdlib.h>

void preenchevetor(int *vetor, int qtd)
{
    int cont, vet[qtd];

    vetor = (int*) malloc(qtd * sizeof(int));
    
    if(vetor == NULL)
    {
        printf("\nErro durante a alocacao\n");
    }
    else
    {  
        vetor = vet;
        for(cont=0; cont < qtd; cont++)
        {
            printf("\nInforme o elemento %d: ", cont);
            scanf("%d", vetor);
            vetor++;
        }

        vetor = vet;
        printf("\nO vetor e:\n{");
        for(cont=0; cont < qtd; cont++)
        {
            printf(" %d ", *vetor);
            vetor++;
        }
        printf("}\n");
    }    
}

int main(){

    int cont, vt[10];

    preenchevetor(vt, 10);
    
    free(vt);

    return 0;
}