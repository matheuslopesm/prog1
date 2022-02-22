#include<stdio.h>

int main (){

    float num[20], num_maior, num_menor;
    int cont, ponto_maior, ponto_menor;

    printf("\nVoce tera que informar 20 numeros!\n");

    for(cont=0; cont<20; cont++)
    {
        printf("Informe o numero %d:\n", cont+1);
        scanf("%f", &num[cont]);
    }

    num_maior=num[0];
    ponto_maior=0;
    for(cont=0; cont<20; cont++)
    {
        if(num[cont] > num_maior)
        {
            num_maior=num[cont];
            ponto_maior=cont;
        }
    }

    num_menor=num[0];
    ponto_menor=0;
    for(cont=0; cont<20; cont++)
    {
        if(num[cont] < num_menor)
        {
            num_menor=num[cont];
            ponto_menor=cont;
        }
    }

    printf("\nMenor valor: %.2f, No indice ponto_menor[%d]", num_menor, ponto_menor+1);
    printf("\nMaior valor: %.2f, No indice ponto_maior[%d]\n", num_maior, ponto_maior+1);
    system("pause");
}