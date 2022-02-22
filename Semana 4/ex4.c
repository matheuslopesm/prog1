#include<stdio.h>

int media_para_conceito(int media)
{
    char conceito;
    if((media>=0) && (media<=49))
    {
        conceito='D';
    }
    else
    {
        if((media>=50) && (media<=69))
        {
            conceito='C';
        }
        else
        {
            if((media>=70) && (media<=89))
            {
                conceito='B';
            }
            else
            {
                if((media>=90) && (media<=100))
                {
                    conceito='A';
                }
            }
        }
    }
    return conceito;
}

int main (){

    char conc;
    int media;

    printf("Informe a media das suas notas: \n");
    scanf("%d", &media);

    conc=media_para_conceito(media);

    printf("O conceito da sua nota e: %c\n", conc);
}
