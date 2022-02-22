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

    int px, py;

    printf("\nPrimeiro voce vai informar os pontos do seu retangulo!\n");
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

    printf("\nAgora voce vai informar 2 pontos!\n");
    printf("\nInforme o ponto X: ");
    scanf("%d", &px);

    printf("\nInforme o ponto Y: ");
    scanf("%d", &py);

    if(((px >= r.supesq.x) & (px <= r.infdir.x)) && ((py <= r.supesq.y) && (py >= r.infdir.y)))
    {
        printf("\nEsse ponto esta dentro do retangulo!");
    }
    else
    {
        printf("\nEsse ponto nao esta dentro do retangulo!");
    }

    return 0;
}