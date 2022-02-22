#include<stdio.h>
#include<math.h>

int main (){

    float salario, salario_tecnico, salario_gerente, salario_demais;
    int codigo;

    printf("Informe o salario do funcionario: \n", salario);
    scanf("%f", &salario);

    salario_tecnico= salario + (0.5*salario);
    salario_gerente= salario + (0.3*salario);
    salario_demais= salario + (0.2*salario);

    printf("(1) tecnico\n(2) gerente\n(3) demais funcionarios");
    printf("\nInforme seu tipo de funcionario: \n", codigo);
    scanf("%d", &codigo);

    switch (codigo)
    {
        case 1:
            printf("Aumento de 0.5, o novo salario e: %.2f \n", salario_tecnico);
        break;
        case 2:
            printf("Aumento de 0.3, o novo salario e: %.2f \n", salario_gerente);
        break;
        case 3:
            printf("Aumento de 0.2, o novo salario e: %.2f \n", salario_demais);
        break;
        default:
            printf("Codigo invalido.");
    }
    return 0;
}

//Ok
