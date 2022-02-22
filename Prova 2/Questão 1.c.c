#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main ()
{
    char gabarito[5] = {'a', 'b', 'c', 'd', 'e'}, resposta[5];
    int qta, certo=0, i;
    float porcentagemnota, matricula[qta];

    printf("\nPrimeiro voce vai informar o numero de matricula de cada aluno...\n");
    for(int qta=0; qta<10; qta++)
    {
        printf("Informe o numero de matricula do aluno (%d):\n", qta+1);
        scanf("%f", &matricula[qta]);
    }
    printf("\nNumeros de matricula informados com sucesso.\n");


    printf("\nPor fim, voce vai informar a resposta da prova por aluno.\n");
    for(int qta=0; qta<10; qta++)
    {
        for(int i=0; i<5; i++)
        {
            printf("Informe a resposta da questao (%d) do aluno (%d):\n", i+1, qta+1);
            gets(resposta); //Filipe, não consegui passar dessa parte, mas acredito que o final estaria certo...    :)
            if(resposta[i] == gabarito[i])
            {
                certo++;
            }
        }
    }
    printf("\nRespostas informadas com sucesso.\n");

    porcentagemnota=(certo*20);

    for(int qta=0; qta<10; qta++)
    {
        printf("\n--------------------------\n");
        printf("Aluno (%d):\n", qta+1);
        printf("Numero de matricula: %d\n", matricula[qta]);
        printf("Nota do aluno: %.1f\n", porcentagemnota);
        printf("\n--------------------------\n");
    }

    return 0;
}