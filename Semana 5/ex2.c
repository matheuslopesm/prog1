#include<stdio.h>

int main (){

    int num[20], cont, soma=0;
    float media;

    for(cont=0; cont<20; cont++)
    {
        printf("Informe o numero %d:\n", cont+1);
        scanf("%d", &num[cont]);
        while(num[cont]<0)
        {
            printf("Numero negativo nao e permitido. Informe novamente o valor da posicao %d:\n", cont+1);
            scanf("%d", &num[cont]);
        }
        soma=soma+num[cont];
    }
    media=soma/20;
    printf("\nA media dos numeros e: %.2f\n", media);
    printf("Os numeros sao:\n");

    for(cont=0; cont<20; cont++)
    {
        if(num[cont]>0)
        {
            printf("%d ", num[cont]);
        }
    }
    return 0;
}
