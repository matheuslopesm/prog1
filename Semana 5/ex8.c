#include<stdio.h>

int main (){

    int cont, matricula[5];
    float salario[5], novosalario[5];

    for(cont=0; cont<5; cont++)
    {
        printf("\nFuncionario %d\n", cont+1);
        printf("Informe a matricula:\n");
        scanf("%d", &matricula[cont]);

        printf("Informe o salario:\n");
        scanf("%f", &salario[cont]);
    }

    for(cont=0; cont<5; cont++)
    {
        if(matricula[cont] % 2 == 0)
        {
            novosalario[cont] = salario[cont] * 1.15;
        }
        else
        {
            novosalario[cont] = salario[cont] * 1.2;
        }
    }

    printf("---------------------------\n");

    for(cont=0; cont<5; cont++)
    {
        printf("Funcionario %d\n", cont+1);
        printf("Matricula: %d\n", matricula[cont]);
        printf("Salario base: %.2f\n", salario[cont]);
        if(matricula[cont] % 2 == 0)
        {
            printf("Percentual de Aumento: 15\n");      
        }
        else
        {
            printf("Percentual de Aumento: 20\n");
        }
        printf("Salario corrigido: %.2f\n", novosalario[cont]);
        printf("---------------------------\n");
    }
    return 0;
}
