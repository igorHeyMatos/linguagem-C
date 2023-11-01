#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int vet[9], i, aux, num, cont = 0;

    for (i = 0; i < 9; i++)
    {
        vet[i] = rand() % 10 + 1;
        printf("%d  ", vet[i]);
    }

    printf("\n");

    aux = vet[8];

    for (i = 8; i >= 1; i--)
    {
        vet[i] = vet[i - 1];
    }
    vet[0] = aux;

    for (i = 0; i < 9; i++)
    {
        printf("%d  ", vet[i]);
    }

    printf("\n");

    for (i = 0; i < 9; i++)
    {
        vet[i] = vet[i] + i;
        printf("%d  ", vet[i]);
    }

    printf("\n");

    printf("Digite um valor a ser buscado no vetor: ");
    scanf("%d", &num);

    for (i = 0; i < 9; i++)
    {
        if (num == vet[i])
        {
            cont++;
        }
    }

    printf("Total: %d", cont);

    return 0;
}