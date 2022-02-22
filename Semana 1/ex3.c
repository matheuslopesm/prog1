#include<stdio.h>
#include<math.h>

int main (){

    float gasto, gorjeta, total, taxa;  
    printf ("Informe o valor gasto no restaurante: %.2f \n", gasto);
    scanf("%f", &gasto);
    taxa=0.1;
    gorjeta= gasto*taxa;
    total= gorjeta + gasto;
    printf ("Consumo no restaurante: %.2f \n", gasto);
    printf ("O valor da gorjeta e: %.2f \n", gorjeta);
    printf ("Total a pagar: %.2f \n", total);

    return 0;
}
