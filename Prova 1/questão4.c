#include<stdio.h>
#include<math.h>

int main (){

    int andar_atual, andar_desejado, andar_passado, andar_inicial;

    andar_atual=1;
    andar_inicial=1;

    printf("Voce esta no térreo. \n");

    for(andar_desejado=1; andar_desejado<=10; andar_passado++)
    {
        printf("Informe para qual andar deseja ir: \n");
        scanf("%d", &andar_desejado);

        while(andar_atual!=andar_desejado)
        {
            printf("Passou pelo andar %d. \n", andar_passado);
        }

        printf("Voce saiu do andar %d. \n", andar_inicial);
        printf("Chegou ao andar %d. \n", andar_desejado);         
    }
    andar_inicial=andar_desejado;
    return 0;
}