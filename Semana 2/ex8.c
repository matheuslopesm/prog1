#include<stdio.h>

int main(){

    int idade, peso;
    char letra;

    idade=0;
    peso=0;

    printf("Informe a primeira letra do seu nome:\n");
    scanf("%c", &letra);

    printf("Informe a sua idade:\n");
    scanf("%d", &idade);
    printf("Informe seu peso:\n");
    scanf("%d", &peso);

    if((idade>=18) && (idade<=67) && (peso>50))
    {
        printf("Voce pode doar sangue!");
    }
    else
    {
        printf("Voce nao pode doar sangue!");
    }
    return 0;    
}

//Ok
