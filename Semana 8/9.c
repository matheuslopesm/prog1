//Compilando o primeiro programa, ele exibe o valor do endereço de memória
//da soma de variaveis (vet + i). 

//No segundo programa, ele exibe o endereço de memória (na RAM)
//da soma de variaveis (vet + i). 

//No terceiro programa, ele também exibe o endereço de memória (na RAM)
//de cada posicao do vetor na variavel "o".. 

#include<stdio.h>

void main(){

    int vet[] = {4, 9, 13};
    int i;

    for(i=0; i<3; i++)
    {
        printf("%d ", *(vet + i));
    }
}
-----------------------------
#include<stdio.h>

void main(){

    int vet[] = {4, 9, 13};
    int i;

    for(i=0; i<3; i++)
    {
        printf("%p ", (vet + i));
    }
}
-----------------------------
#include<stdio.h>

void main(){

    int vet[] = {4, 9, 13};
    int *o = vet;
    int i;

    for(i=0; i<3; i++)
    {
        printf("%p ", o++);
    }
}
-----------------------------