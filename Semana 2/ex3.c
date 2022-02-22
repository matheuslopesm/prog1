#include<stdio.h>
#include<math.h>

int main(){

    float a, b, c, x1, x2, delta;

    a=0;
    b=0;
    c=0;
    
    printf("Informe o a: \n", a);
    scanf("%f", &a);

    printf("Informe o b: \n", b);
    scanf("%f", &b);
    
    printf("Informe o c: \n", c);
    scanf("%f", &c);
    
    delta = pow(b,2) - 4*a*c;
    x1=(-b+sqrt(delta))/2*a;
    x2=(-b-sqrt(delta))/2*a;

    if (delta>=0)
    {
        printf("A raiz x1 e: %1.f \n", x1);
        printf("A raiz x2 e: %1.f \n", x2);
    }
    else
    {
    printf("Como o delta e negativo, nao existem raizes reais.");  
    }
    return 0;
}

//Ok
