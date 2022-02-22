#include<stdio.h>
#include<math.h>

int main (){

    float salario, maior;
    
    salario=0;

    printf("Informe os salarios dos funcionarios\nDigite '-1' quando quiser parar de informar\n");

    do 
    {
        scanf("%f", &salario);
        if(salario>maior)
        {
            maior=salario;
        }
    }while(salario!=-1);
    printf("O maior salario e %.2f \n", maior);

    return 0;
}




