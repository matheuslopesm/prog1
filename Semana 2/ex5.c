#include<stdio.h>
#include<math.h>

int main (){

    float a, b, c;

    printf("Informe os lados do triangulo: \n", a, b, c);
    scanf("%f%f%f", &a, &b, &c);

    if ((a!=b) || (a!=c) || (b!=c))
    {
        printf("Seu triangulo e ESCALENO");
    }
    else
    {
        if((a==b) && (a==c) && (b==c))
        {
            printf("Seu triangulo e EQUILATERO");
        }
        else
        {
            printf("Seu triangulo e ISOSCELES");  
        }
    }
    return 0;
}

//Ok
