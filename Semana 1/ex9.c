#include<stdio.h>
#include<math.h>

int main(){
    //Filipe, achei o enunciado confuso na questão do montante total e montante final.
    //Por isso, fiz pensando que o usuário digitaria o montante final!

    float montante, taxa, taxa_decimal, juros, total;
    int tempo;

    printf("Informe o montante total: %.2f \n", montante);
    scanf("%f", &montante);
    printf("Informe o periodo (em meses) que o dinheiro vai render: %d \n", tempo);
    scanf("%d", &tempo);
    printf("Informe a taxa de juros mensal: %.2f \n", taxa);
    scanf("%f", &taxa);
    
    taxa_decimal=1+(taxa/100);
    total=montante/pow(taxa_decimal,tempo);
    juros=montante-total;

    printf("O total investido foi: %.2f \n", total);
    printf("O montante final e: %.2f \n", montante);
    printf("O valor total de juros obtido foi: %.2f \n", juros);

    return 0;
}