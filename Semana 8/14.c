#include<stdio.h>
#include<stdlib.h>

float *aloca_vetor_float (int qtd)
{
    float *pt;
    
    pt = (float *) malloc(qtd * sizeof(float));

    return pt;   
}

void exibe_vetor (int vetor[], int qtd)
{
    int cont;
    float *pt;
    
    pt = vetor;
    printf("\nO vetor e:\n{");
    for(cont = 0; cont < qtd; cont++)
    {
        printf(" %.2f ", (*pt));
        pt++;
    }
    printf("}\n");
}

int main (){

    int cont, n;
    float *pt, *vetor;

    printf("Informe um numero: ");
    scanf("%d", &n);

    vetor = aloca_vetor_float(n);

    if(vetor == NULL)
    {
        printf("\nErro durante a alocacao\n");
        return -1;
    }
    else
    {
        pt = vetor;
        for(cont = 0; cont < n; cont++)
        {
            printf("Informe o valor da posicao %d: ", cont);
            scanf("%f", pt);
            pt++;
        }    
    }

    exibe_vetor(vetor, n);

    free(vetor);

    return 0;
}


