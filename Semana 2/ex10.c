#include <stdio.h>
#include<math.h>

int main (){

    int num1, num2, soma, produto;
    float media, divisao1, divisao2;

    printf("Informe o primeiro numero INTEIRO: \n");
    scanf("%d", &num1);
    printf("Informe o segundo numero INTEIRO: \n");
    scanf("%d", &num2);

    soma=num1+num2;
    media=(num1+num2)/2;
    produto=(num1*num2);
    divisao1=(num1/num2);
    divisao2=(num2/num1);

    if((num1>=1) && (num2<=10))
    {
        if(soma<8)
        {
            printf("A media dos numeros e %.2f \n", media);
        }
        else
        {
            if(soma==8)
            {
                printf("O produto dos numeros e %d \n", produto);
            }
            else
            {
                if(soma>8 && num1>num2)
                {
                    printf("A divisao do maior(num1) pelo menor(num2) e %.2f \n", divisao1);
                }
                else
                {
                    if(soma>8 && num2>num1)
                    {
                        printf("A divisao do maior(num2) pelo menor (num1) e %.2f \n", divisao2);
                    }
                    else
                    {
                        printf("Numeros invalidos");
                    }
                }
            }                                                                  
        }
    }
    else
    {
        printf("Numeros invalidos");
    }
    return 0;
}

//Ok
