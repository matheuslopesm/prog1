#include<stdio.h>
#include<math.h>

int main (){

    float a, b, c, d, e, f, letra_a, letra_b, letra_c, letra_d, letra_e, letra_f, delta;

    a = 1.5;
    b = 4; 
    c = 2; 
    d = 3; 
    e = 1.2; 
    f = 4.3;

    letra_a= (a*(c+d))/(b*(e+f)); //Ok
    letra_b= (pow(a, (b+c)))/(e + f)+d; //Ok
    letra_c= (a+(((pow(c+d, 2))*d)/(b*b))*(1/c)); //Ok
    delta= sqrt((b*b)-4*a*c); //Ok
    letra_d= (-b+delta)/(2*a); //Ok

    printf("O valor da Expressao A e: %.1f", letra_a);
    printf("\nO valor da Expressao B e: %.1f", letra_b);
    printf("\nO valor da Expressao C e: %.1f", letra_c);
    printf("\nO valor da Expressao D e: %.1f", letra_d);

    return 0;
}

//Ok