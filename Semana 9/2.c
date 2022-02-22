#include<stdio.h>
#include<math.h>

struct pontos_plano{
    int x;
    int y;
};

int main (){

    float distanciapontos;

    struct pontos_plano p; 

    printf("\nInforme o ponto X:\n");
    scanf("%d", &p.x);

    printf("\nInforme o ponto Y:\n");
    scanf("%d", &p.y);

    distanciapontos = sqrt((pow(p.x, 2)) + (pow(p.y, 2)));

    printf("\nA distancia de (%d, %d) ao ponto (0,0) e: %.2f", p.x, p.y, distanciapontos);

    return 0;
}