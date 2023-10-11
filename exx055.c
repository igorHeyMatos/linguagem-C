#include <stdio.h>

int main()
{

    int vetor1[4], vetor2[4], i, sub = 0;

    for (i = 0; i < 4; i++)
    {
        printf("Digite um numero para o vetor1 no indice %d: ", i);
        scanf("%d", &vetor1[i]);
    }

    for (i = 0; i < 4; i++)
    {
        printf("Digite um numero para o vetor2 no indice %d: ", i);
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < 4; i++)
    {
        sub = vetor1[i] - vetor2[i];
        printf("VALORES: %d\n", sub);
    }

    return 0;
}