#include <stdio.h>

int main(){
    int F, C;
    printf("Informe a temperatura em Graus Farenheit: %d \n", F);
    scanf("%d", &F);
    C=((5*F)-160)/9;
    printf("Farenheit: %d \n", F);
    printf("Celsius: %d \n", C);
    scanf("%d", &C);

    return 0;
}