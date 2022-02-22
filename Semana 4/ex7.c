#include<stdio.h>

int main (){

    int n1, n2;

    printf("Informe dois numeros inteiros:\n");
    scanf("%d%d", &n1, &n2); 

    if(n1<n2)
    {
        int somaintervalo();
        printf("A Soma do intervalo (%d, %d) e: %d\n", n1, n2, somaintervalo(n1, n2));
    }
    else
    {
        int soma_invertida_intervalo();
        printf("A Soma do intervalo (%d, %d) e: %d\n", n2, n1, soma_invertida_intervalo(n2, n1));
    }
    return 0;
}

int somaintervalo (int n1, int n2)
{
    int soma, cont;

    do
    {
        cont=n1++;
        soma=soma+cont;
    }while(cont!=n2);
    return soma;
}

int soma_invertida_intervalo (int n1, int n2)
{
    int soma2, cont2;
    do
    {
        cont2=n2--;
        soma2=soma2+cont2;       
    }while(cont2!=n1);
    return soma2;
}
