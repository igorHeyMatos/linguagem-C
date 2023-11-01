#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int vet[10], i;
    float vet2[10];

    for (i = 0; i < 10; i++)
    {
        vet[i] = rand() % 10 + 1;
    }

    for (i = 0; i < 10; i++)
    {
        if (vet[i] % 2 == 0)
        {
            vet2[i] = vet[i] / 2.0;
            printf("Pares: %.2f INDICE: %d\n", vet2[i], i);
        }
        else
        {
            vet2[i] = vet[i] * 3.0;
            printf("Impares: %.2f INDICE: %d\n", vet2[i], i);
        }
    }

    return 0;
}