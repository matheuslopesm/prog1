#include<stdio.h>

int main (){

    int idade;

    printf("Informe a idade da pessoa: \n");
    scanf("%d", &idade);

    if(idade < 13) 
    {
        printf("Essa pessoa e uma crianca.");
    }
    else
    {
        if(idade >= 13 && idade < 20)
        {
            printf("Essa pessoa e um adolescente.");   
        }
        else
        {
            if(idade >= 20 && idade < 60)
            {
                printf("Essa pessoa e um adulto.");
            }
            else
            {
                if(idade >= 60)
                {
                    printf("Essa pessoa e idosa.");
                }
                else
                {
                    printf("Invalido. Digite novamente.");
                }
            }
        }
    }
    return 0;
}