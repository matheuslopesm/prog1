#include<stdio.h>
//Filipe, essa eu não consegui acertar a mão de jeito nenhum!

int main(){

    int num, cont;

    printf("Serie de Fibonacci\n");
    printf("Digite a quantidade de termos da serie que voce quer:\n");
    scanf("%d", &num);

    printf("A sequencia e:\n");

    for(cont=1; cont<num; cont++)
    {
        printf("%d", fibo_funcao(cont));
    }
}

int fibo_funcao(int num)
{
    int fibonacci;

    if(num==1)
    {
        return 0;
    }
    else
    {
        if(num==2)
        {
            return 1;
        }
        else
        {
            return fibonacci=(num-1)+(num-2);
        }
    }
}

