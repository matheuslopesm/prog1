#include<stdio.h>

int main (){

    int idade; 
    float peso;
    char s, n;

    do
    {
        printf("Informe a idade da pessoa: \n");
        scanf("%d", &idade);
        while(idade>=30)
        {
            printf("Informe o peso dessa pessoa: \n");
            scanf("%f", &peso);
        }
        printf("Voce quer informar mais pessoas?\n\ts - sim\n\tn - não");
        scanf("%c%c", &s, &n);
    }while(0);
    printf("Voce quer informar mais pessoas?\n\ts - sim\n\tn - não\n");
    scanf("%c%c", &s, &n);
    return 0;
}
