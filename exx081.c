#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int vet[1000], i, num, cont = 0;

    for (i = 0; i < 1000; i++)
    {
        vet[i] = rand() % 50 + 1;
        // printf("INDICE %d: %d\n", i, vet[i]);
    }

    printf("Digite um valor a ser pesquisado no vetor: ");
    scanf("%d", &num);

    for (i = 0; i < 1000; i++)
    {
        if (num == vet[i])
        {
            printf("valor: %d INDICE: %d\n", vet[i], i);
            cont++;
        }
    }

    printf("Apareceu: %d vezes", cont);

    return 0;
}