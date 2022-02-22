#include<stdio.h>
#include<math.h>

int main (){

    int numero_habitantes, numero_filhos, soma_filhos, numero_salarioate100;
    float salario, soma_salario, maior_salario, pct_ate100, media_salario, media_filhos;

    soma_salario=0;
    soma_filhos=0;
    maior_salario=0;

    do
    {
        printf("Informe o salario da pessoa: \n");
        scanf("%f", &salario);

        if(salario<=100)
        {
        numero_salarioate100++;          
        }
        printf("Informe o numero de filhos dessa pessoa, e digite '0' quando quiser parar de informar: \n");
        scanf("%d", &numero_filhos);

        soma_salario=soma_salario+salario;
        numero_habitantes++;
        soma_filhos=soma_filhos+numero_filhos;

        if(salario>maior_salario)
        {
            maior_salario=salario;
        }
    }while(salario!=0 || numero_filhos!=0);

    pct_ate100=(100*(numero_salarioate100-1))/(numero_habitantes-1);
    media_salario=soma_salario/(numero_habitantes-1);
    media_filhos=soma_filhos/(numero_habitantes-1);
    printf("A media do salario da populacao e %.2f \n", media_salario);
    printf("A media do numero de filhos e %.2f \n", media_filhos);
    printf("O maior salario e %.2f \n", maior_salario);
    printf("O percentual de pessoas com salario menor que 100 e %.2f \n", pct_ate100);
    return 0;
}