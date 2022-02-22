#include <stdio.h>

int main(){
    int C, F;
    printf("Informe a temperatura em Graus Celsius: %d \n", C);
    scanf("%d", &C);
    F= ((9*C) + 160)/5;
    printf("Celsius: %d \n", C);
    printf("Farenheit: %d \n", F);
    scanf("%d", &F);

    return 0;
}