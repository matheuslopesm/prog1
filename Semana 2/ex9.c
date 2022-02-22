#include<stdio.h>

int main (){

    int x, y;

    printf("Informe o valor do ponto x: \n");
    scanf("%d", &x);
    printf("Informe o valor do ponto y: \n");
    scanf("%d", &y);

    if((x>=0) && (y>=0))
    {
        printf("O ponto esta no primeiro quadrante");
    }
    else
    {
        if((x<=0) && (y>=0))
        {
            printf("O ponto esta no segundo quadrante");
        }
        else
        {
            if((x<=0) && (y<=0))
            {
                printf("O ponto esta no terceiro quadrante");
            }
            else
            {
                if((x>=0) && (y<=0))
                {
                    printf("O ponto esta no quarto quadrante");
                }
                else
                {
                    printf("Pontos invalidos");
                }
            }
        }
    }
    return 0;
}

//Ok