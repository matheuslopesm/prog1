#include<stdio.h>

int main(){

    float nota;

    printf("Informe a nota do aluno: \n");
    scanf("%f", &nota);

    if((nota>=9) && (nota<=10))
    {
        printf("O conceito da nota e A");
    }
    else
    {
        if((nota>=7) && (nota<=8.9))
        {
            printf("O conceito da nota e B");
        }
        else
        {
            if((nota>=5) && (nota<=6.9))
            {
                printf("O conceito da nota e C");
            }
            else
            {
                if((nota<5))
                {
                    printf("O conceito da nota e D");
                }
                else
                {
                    printf("Nota invalida!");
                }
            }
        }
    }
    return 0;
}

//Ok