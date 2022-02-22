#include <stdio.h>

int main(){

    float minimo, salario, proporcao;
    printf("O salario minimo atual: R$ 622.00 \n");
    printf("Informe seu salario: %.2f \n", salario);
    scanf("%f", &salario);
    minimo=622;
    proporcao = salario / minimo;
    printf("Seu salario e %.1f vezes o salario minimo. \n", proporcao);
    scanf("%f", &proporcao);

    return 0;
}