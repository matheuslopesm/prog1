#include <stdio.h>
#include <stdlib.h>

int matriz[4][4];

void soma(int op)
{
    int i, j, adicao = 0, soma, auxsoma = 0;

    switch(op)
    {
        case 1:
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    adicao =  adicao + matriz[i][j];
                }
                soma = adicao -  auxsoma;
                auxsoma = adicao;
                printf("Soma linha %d: %d\n", i, soma);
            }
            break;
        case 2:
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    adicao =  adicao + matriz[j][i];
                }
                soma = adicao -  auxsoma;
                auxsoma = adicao;
                printf("Soma coluna %d: %d\n", i, soma);
            }
            break;
        case 3:
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    if(i==j)
                    {
                        adicao =  adicao + matriz[i][j];
                    }
                }
            }
            printf("Soma da diagonal principal: %d\n", adicao);
            break;
        case 4:
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    if((i + j)==3)
                    {
                        adicao =  adicao + matriz[i][j];
                    }
                }
            }
            printf("Soma da diagonal secundaria: %d\n", adicao);
            break;
        case 5:
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    if( i == 0 || j == 0 || i == 3 || j == 3)
                    {
                        adicao =  adicao + matriz[i][j];
                    }
                }
            }
            printf("Soma para a borda da matriz: %d\n", adicao);
            break;
        case 6:
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    if( i != 0)
                    {
                        if( j != 0 )
                        {
                            if(i != 3)
                            {
                                if(j != 3)
                                {
                                    adicao =  adicao + matriz[i][j];
                                }
                            }
                        }
                    }
                }
            }
            printf("Soma para elementos internos: %d\n", adicao);
            break;
        default:
            printf("Operacao invalida");
    }
}

void multiplicacao(int op)
{
    int i, j, adicao = 0, multiplicacao;
    switch(op)
    {
        case 1:
            for (i = 0; i < 4; i++)
            {
                multiplicacao = 1;
                for (j = 0; j < 4; j++)
                {
                    multiplicacao =  multiplicacao * matriz[i][j];
                }
                printf("Multiplicacao linha %d: %d\n", i, multiplicacao);
            }
            break;
        case 2:
            for (i = 0; i < 4; i++)
            {
                multiplicacao = 1;
                for (j = 0; j < 4; j++)
                {
                    multiplicacao =  multiplicacao * matriz[j][i];
                }
                printf("Multiplicacao coluna %d: %d\n", i, multiplicacao);
            }
            break;
        case 3:
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    if( i==j )
                    {
                        multiplicacao =  multiplicacao * matriz[i][j];
                    }
                }
            }
            printf("Multiplicacao diagonal principal: %d\n", multiplicacao);
            break;
        case 4:
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    if( i + j == 3)
                    {
                        multiplicacao =  multiplicacao * matriz[i][j];
                    }
                }
            }
            printf("Multiplicacao diagonal secundaria: %d\n", multiplicacao);
            break;
        case 5:
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    if( i == 0 || j == 0 || i == 3 || j == 3)
                    {
                        multiplicacao =  multiplicacao * matriz[i][j];
                    }
                }
            }
            printf("Multiplicacao dos elementos da borda: %d\n", multiplicacao);
            break;
        case 6:
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    if( i != 0)
                    {
                        if( j != 0 )
                        {
                            if(i != 3)
                            {
                                if(j != 3)
                                {
                                    multiplicacao =  multiplicacao * matriz[i][j];
                                }
                            }
                        }
                    }
                }
            }
            printf("Multiplicacao dos elementos internos: %d\n", multiplicacao);
            break;
        default:
            printf("Operacao invalida");
    }
}

int main()
{
    int num[16], calculo, op;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Informe o valor da posicao [%d, %d]:\n", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz:\n");
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            printf(" %d ", matriz[y][x]);
        }
    }

    printf("\nQual operaçao basica voce querf \n(1) Soma\n(2) Multiplicacao\n\n");
    scanf("%d", &calculo);

    printf("\nOpcoes de calculos: \n1. Calculo para cada linha.\n2. Calculo para cada coluna\n3. Calculo para a diagonal principal.\n4. Calculo para a diagonal secundaria.\n5. Calculo para os elementos da borda da matriz.\n6. Calculo para os elementos internos da matriz.\n\n");
    scanf("%d", &op);

    if(calculo == 1)
    {
        soma(op);
    } else if(calculo == 2){
        multiplicacao(op);
    } 
    else 
    {
        printf("Operacao invalida");
    }

    return 0;
}
