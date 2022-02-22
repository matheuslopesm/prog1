#include<stdio.h>
#include<math.h>

int main (){

    int x, n, i;
    float somatorio_total, novo_soma, somatorio_inf, somatorio_sup;
    i=1;
    somatorio_inf=0;
    somatorio_sup=0;
    somatorio_total=0;
    novo_soma=somatorio_total;

    printf("Informe um numero inteiro para x: \n");
    scanf("%d", &x);
    printf("Informe um numero inteiro para n: \n");  
    scanf("%d", &n);

    do
    {
        i++;
        somatorio_sup=(2*(pow(x, i)) - (3*i*x) + (2*n));
        somatorio_inf=(i+5);
        somatorio_total=(n*n)*(somatorio_sup/somatorio_inf);
        novo_soma=somatorio_total+novo_soma;
    }while(i<n);
    printf("O valor total do somatorio e %.2f \n", novo_soma);
    return 0;
}