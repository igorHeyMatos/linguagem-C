#include <stdio.h>

int x, y;

void inversao(int a, int b)
{
    int aux;
    aux = a;

    a = b;

    b = aux;

    printf("FUNCAO: depois da troca - A: %d B: %d\n", a, b);

    aux = x;

    x = y;

    y = aux;

    printf("FUNCAO: depois da troca - X: %d Y: %d\n", x, y);
}

int main()
{

    int a = 2, b = 4;

    x = 10, y = 20;

    printf("MAIN: antes da troca - A: %d B: %d\n", a, b);

    printf("MAIN: antes da troca - X: %d Y: %d\n", x, y);

    inversao(a, b);

    return 0;
}