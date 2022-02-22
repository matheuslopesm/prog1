#include<stdio.h>
#include<math.h>

int main(){

    int n,tab;

    printf("Informe um numero inteiro: \n");
    scanf("%d", &n);

    for(int cont=1; cont<=n; cont++)
    {
        tab=n*cont;
        printf("%d*%d = %d\n", n, cont, tab);
    }
    return 0;
}