#include <stdio.h>

int main()
{

    int vetor[4], i;

    for (i = 0; i < 4; i++)
    {
        printf("Digite um numero para o indice %d: ", i);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0)
        {
            printf("INDICE %d eh par!\n", vetor[i]);
        }
    }

    return 0;
}