#include<stdio.h>

void func(int *px, int *py)
{
    px = py;
    *py = (*py) * (*px);
    *px = *px + 2;
}

void main (void)
{
    int x, y;
    
    scanf("%d", &x);
    scanf("%d", &y);

    func(&x, &y);
    printf("x = %d, y = %d", x, y);
}

//RESPOSTA:

//   x   |   y   |   px   |   py   |
// --------------------------------
//   3   |   4   |   4    |   18   |
//   3   |   18  |   18   |        |
// --------------------------------