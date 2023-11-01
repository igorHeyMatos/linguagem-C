#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int numero_aleatorio;

    srand(time(NULL));
    numero_aleatorio = rand() % 101;

    printf("Valor: %d", numero_aleatorio);

    return 0;
}