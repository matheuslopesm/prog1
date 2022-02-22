#include<stdio.h>
#include<math.h>

int main(){

    float produto, desconto, descontado, total;
    printf("Informe o valor do produto: %.2f \n", produto);
    scanf("%f", &produto);
    printf("Informe o percentual do desconto: %.2f \n", desconto);
    scanf("%f", &desconto);
    descontado=produto*(desconto/100);
    total=produto-descontado;
    printf("O valor do produto com o desconto e: %.2f \n", total);
    scanf("%f", &total);
    
    return 0;
}