#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void preenchevetores(int p1[], int p2[], int qtd)
{
    int cont;
    int *p3;
    int *pt1 = p1, *pt2 = p2, *pt3;

    p3 = (int *) malloc(qtd * sizeof(int));

    pt3 = p3;
    printf("O vetor 3 e:\n{");
    for(cont = 0; cont < qtd; cont++)
    {
        *pt3 = *pt1 + *pt2;
        printf(" %d ", *pt3);
        pt3++;
        pt1++;
        pt2++;
    }
    printf("}\n");

    free(p3);
}

int main (){

    int t, cont;
    int *vet1, *vet2;
    int *pt1, *pt2, *pt3;

    printf("\nInforme qual sera o tamanho dos seus vetores: \n");
    scanf("%d", &t);
    
    vet1 = (int *) malloc(t * sizeof(int));
    vet2 = (int *) malloc(t * sizeof(int));
    
    if((pt1 == NULL) || (pt2 == NULL))
    {
        printf("\nErro durante a alocacao\n");
    }
    else
    {
        pt1 = vet1; 
        for(cont = 0; cont < t; cont++)
        {
            printf("Informe a posicao %d do Vetor 1: \n", cont);
            scanf("%d", pt1);
            pt1++;
        }

        pt2 = vet2; 
        for(cont = 0; cont < t; cont++)
        {
            printf("Informe a posicao %d do Vetor 2: \n", cont);
            scanf("%d", pt2);
            pt2++;
        }
    }

    preenchevetores(vet1, vet2, t); 

    free(pt1);
    free(pt2);

    return 0;
}