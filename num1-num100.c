#include <stdio.h>

int main()
{
    int num = 0, contador = 1;

    while (contador <= 100)
    {
        num = num + contador;
        contador += 1;
    }

    printf("Resultado final: %d", num);

        return 0;
}