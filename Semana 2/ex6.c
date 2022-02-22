#include<stdio.h>
#include<math.h>

int main(){

    float pi, raio, altura, volume;

    pi=3.14159;
    volume=0;    

    printf("Informe o raio da base: \n", raio);
    scanf("%f", &raio);

    printf("Informe a altura da lata: \n", altura);
    scanf("%f", &altura);

    volume=pi*(pow(raio, 2)*altura);

    printf("O volume da lata e %.2f", volume);

    return 0;
}

//Ok