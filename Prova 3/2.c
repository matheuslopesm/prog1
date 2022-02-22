#include<stdio.h>
#include<stdlib.h>

float preenchevetor(int qtd)
{
    int cont;
    int *vetor, *pt;
    
    vetor = (int *) malloc(qtd * sizeof(int));

    pt = vetor;
    if(pt == NULL)
    {
        printf("\nErro durante a alocacao\n");
        return -1;
    }
    else
    {    
        for(cont = 0; cont < qtd; cont++)
        {
            printf("Informe o valor da posicao %d: ", cont);
            scanf("%d", pt);
            pt++;
        }

        pt = vetor; 
           
        printf("\nO vetor e:\n{");
        for(cont = 0; cont < qtd; cont++)
        {
            printf(" %d ", *pt);
            pt++;
        }
        printf("}\n");
    }

    free(vetor);

    return *pt;   
}

int main (){

    int cont, n;
    int *pt, *vetor;

    printf("Informe um valor: ");
    scanf("%d", &n);

    preenchevetor(n);

    return 0;
}



