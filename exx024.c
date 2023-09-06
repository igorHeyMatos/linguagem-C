#include <stdio.h>

int main()
{
    int num = 0, pares, contador = 0;

    while (contador <= 100)
    {
        if (contador % 2 == 0)
        {
            pares++;
            num = num + contador;
            printf("Numero par: %d QTD pares: %d Soma parcial: %d\n", contador, pares, num);
        }
        contador++;
    }

    printf("A media dos pares eh: %d", num / pares);

    return 0;
}