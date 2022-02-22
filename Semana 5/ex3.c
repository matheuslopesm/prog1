#include<stdio.h>

int main (){

    float numA[10], numB[10], iguais[10], resultado[10];
    int cont; 

    printf("\nVoce tera que informar 10 numeros para dois vetores.\n");
    printf("Agora voce informara os numeros do Vetor 1!\n");  

    for(cont=0; cont<10; cont++)
    {
        printf("Informe o numero %d do vetor 1:\n", cont+1);
        scanf("%f", &numA[cont]);
    } 
    printf("\nAgora voce informara os numeros do Vetor 2!\n");  
    for(cont=0; cont<10; cont++)
    {
        printf("Informe o numero %d do vetor 2:\n", cont+1);
        scanf("%f", &numB[cont]);
    }

    for(cont=0; cont<10; cont++)
    {
        resultado[cont]=numA[cont]*numB[cont];
        printf("\nresultado[%d]=%.2f", cont+1, resultado[cont]);
    }
    return 0;
}