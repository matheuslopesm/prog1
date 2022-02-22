#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int x, y;
    float soma, diferenca, produto, quociente;
    printf("Digite o numero 1 \n", x);
    scanf("%d", &x);
    printf("Digite o numero 2 \n", y);
    scanf("%d", &y);
    soma=x + y;
    diferenca=x - y;
    produto=x * y;
    quociente= (float)x / y;

    printf("%.d + %.d = %.f \n", x, y, soma);
    printf("%.d - %.d = %.f \n", x, y, diferenca);
    printf("%.d * %.d = %.f \n", x, y, produto);
    printf("%.d / %.d = %.2f \n", x, y, quociente);
    return 0;
}
