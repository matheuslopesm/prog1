#include<stdio.h>
#include<stdlib.h>

int main (){

    int dia, mes;

    printf("Informe qual o dia do ano: \n");
    scanf("%d", &dia);

    printf("Informe qual o mes (em numero): \n");
    scanf("%d", &mes);

    void estacao ();
    return 0;
}

//Filipe esse código deu mais trabalho que tudo :,) mas missão cumprida kkkkkkkkkk
//Na parte do switch eu tava usando if, não dava certo, fui pro switch e deu! 
void estacao(int dia, int mes)
{
    int temporada;
    if(mes<=3)
    {
        temporada=1;
        if((mes==3) && (dia>20))
        {
            temporada=2;
        }
    }
    else
    {
        if((mes>3) && (mes<=6))
        {
                temporada=2;
                if((mes==6) && (dia>20))
                {
                    temporada=3;
                }
        }
        else
        {
            if((mes>6) && (mes<=9))
            {
                temporada=3;
                if((mes==9) && (dia>22))
                {
                    temporada=4;
                }
            }
            else
            {
                if((mes>=10) && (mes<=12))
                {
                    temporada=4;
                    if((mes==12) && (dia>20))
                    {
                        temporada=1;
                    }
                }
            }
        }
    }
    switch(temporada)
    {
        case 1:
        printf("%d/%d e verao", dia, mes);
        break;
        case 2:
        printf("%d/%d e outono", dia, mes);
        break;
        case 3:
        printf("%d/%d e inverno", dia, mes);
        break;
        case 4:
        printf("%d/%d e primavera", dia, mes);
        break;
    }
}