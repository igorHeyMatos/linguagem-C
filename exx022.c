#include <stdio.h>

int main()
{
    int cont = 0;
    float quico = 1.40, chaves = 1.10;

    while (quico >= chaves)
    {
        quico = quico + 0.02;
        chaves = chaves + 0.03;
        cont++;
    }

    printf("Tamanho Quico: %.2f\nTamanho Chaves: %.2f\nTotal de anos: %d", quico, chaves, cont);

    return 0;
}