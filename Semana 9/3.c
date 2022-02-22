#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct ponto{
    int x;
    int y;
};

struct retangulo{
    struct ponto supesq;
    struct ponto infdir;
};

int main (){

    int area, per;
    float diag;
    int base, alt;
    struct retangulo r;

    printf("\nInforme o ponto X (Superior esquerdo): ");
    scanf("%d", &r.supesq.x);

    printf("\nInforme o ponto Y (Superior esquerdo): ");
    scanf("%d", &r.supesq.y);

    printf("\nInforme o ponto X (Inferior direito): ");
    scanf("%d", &r.infdir.x);

    printf("\nInforme o ponto Y (Inferior direito): ");
    scanf("%d", &r.infdir.y);

    base = r.infdir.x - r.supesq.x;
    alt = r.supesq.y - r.infdir.y;
    per = base + base + alt + alt;
    area = base * alt;

    diag = sqrt(pow(base, 2) + pow(alt, 2)); 
    printf("\n--------------------------\n");
    printf("Area do retangulo: %d\n", area);
    printf("Diagonal do retangulo: %.2f\n", diag);
    printf("Perimetro do retangulo: %d\n", per);
    printf("--------------------------\n");

    return 0;
}