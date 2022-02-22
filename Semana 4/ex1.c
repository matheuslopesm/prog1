#include<stdio.h>
#include<stdlib.h>

int main (){

    int dias, meses, anos;

    printf("\nInforme sua idade\n");
    printf("Em anos:");
    scanf("%d", &anos);

    //Pra ficar mais legível, coloquei que uma função vai ser declarada aqui
    int calcula_anos_dias();

    printf("\nEm meses:");
    scanf("%d", &meses);

    //Pra ficar mais legível, coloquei que uma função vai ser declarada aqui
    int calcula_meses_dias();

    printf("\nEm dias:");
    scanf("%d", &dias);

    int resultado;
    resultado=calcula_anos_dias(anos)+calcula_meses_dias(meses)+dias;
    printf("\nA idade em dias e: %d\n", resultado);
    return 0;
}

int calcula_anos_dias(int anos)
{
    int anos_em_dias;
    anos_em_dias=(anos*365);
    return anos_em_dias;
}//Converteu anos em dias

int calcula_meses_dias(int meses)
{
    int meses_em_dias;
    meses_em_dias=(meses*30);
    return meses_em_dias;
} //Converteu meses em dias
//Filipe, nao precisa converter dias, ja e obvio.