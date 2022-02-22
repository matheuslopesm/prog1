#include<stdio.h>
#include<stdlib.h>

void *operacao_sobre_vetores(int *a, int *b, int qtd)
{
    int cont, *avet = a, *bvet = b;
    int *mult = NULL, *divi = NULL, *cvet;

    cvet = (int *) malloc(qtd * sizeof(int));

    mult = cvet;
    for(cont=0; cont < qtd; cont++)
    {
        *mult = *avet * *bvet;
        mult++;
        avet++;
    }

    divi = cvet;
    for(cont=0; cont < qtd; cont++)
    {
        *divi = *avet * *bvet;
        divi++;
        bvet++;
    }

    free(cvet);
}

int main (){

    float *p1, *p2; 
    int cont, n;
    float *vet1, *vet2;

    printf("\nPrimeiro, informe quantos elementos voce quer: ");
    scanf("%d", &n);

    printf("\nAgora voce vai informar dados dos 2 vetores.\n");

    vet1 = (float *) malloc(n * sizeof(float));
    vet2 = (float *) malloc(n * sizeof(float));

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
            scanf("%f", p1);
            p1++;
        }

        p2 = vet2;
        for(cont = 0; cont < n; cont++)
        {
            printf("\nInforme o valor da posicao %d - Vetor 2: ", cont);
            scanf("%f", p2);
            p2++;
        }
    }

    p1 = vet1;
    printf("\nVetor inicial 1:\n{");
    for(cont = 0; cont < n; cont++)
    {
        printf(" %.1f ", *p1); 
        p1++;
    }
    printf("}\n");

    p2 = vet2;
    printf("\nVetor inicial 2:\n{");
    for(cont = 0; cont < n; cont++)
    {
        printf(" %.1f ", *p2); 
        p2++;
    }
    printf("}\n");

    int *mult = operacao_sobre_vetores(vet1, vet2, n);

    //Filipe tive certo problema em mostrar os vetores, mas a logica
    //parece certa, Abraço.

    p1 = mult;
    printf("\nVetor 1 apos a execucao:\n{");
    for(cont = 0; cont < n; cont++)
    {
        printf(" %d ", *p1); 
        p1++;
    }
    printf("}\n");

    p2 = mult;
    printf("\nVetor 2 apos a execucao:\n{");
    for(cont = 0; cont < n; cont++)
    {
        printf(" %d ", *p2); 
        p2++;
    }
    printf("}\n");

    free(vet1);
    free(vet2);

    return 0;
}
