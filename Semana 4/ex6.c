#include<stdio.h>

int main() 
{
    int n1, n2, num;

    printf("Informe o primeiro e o ultimo numero do seu intervalo:\n");
    scanf("%d %d", &n1, &n2);

    num = contaimpar(n1, n2);
    printf("Existem %d impares no intervalo\n", num);
    return 0;
}

int contaimpar(int n1, int n2) 
{
    int menor, maior, cont, num=0;

    if(n1<n2) 
    {
        menor=n1;
        maior=n2;
    } 
    else 
    {
        menor=n2;
        maior=n1;
    }
    for(cont=menor; cont<=maior; ++cont) 
    {
        if(cont%2==1) 
        {
            ++num;
        }
    }  
    return num;
}