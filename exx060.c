#include <stdio.h>

int main()
{

    int vetor[5], i;

    for (i = 0; i < 6; i++)
    {
        printf("Digite um numero para o indice %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 5; i >= 0; i--)
    {
        printf("Valores: %d\n", vetor[i]);
    }

    return 0;
}