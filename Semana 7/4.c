#include<stdio.h>

int main (){

    int a, b, c;

    for(c=1; c<500; c++)
    {
        for(a=1; a<500; a++)
        {
            for(b=1; b<500; b++)
            {
                int aux=a*a+b*b;
                int hip=c*c;

                if(aux == hip)
                {
                    printf("\n(%d, %d e %d) sao um triangulo retangulo!", c, a, b);
                }
                else
                {
                    if(aux > hip)
                    {
                        break;
                    }
                }             
            }
        }
    }

    return 0;
}