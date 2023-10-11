#include <stdio.h>

int main()
{

    int vetor[4], i, cont = 9;

    for (i = 0; cont > 4; cont--)
    {
        i++;
        printf("Digite um numero para o indice %d: ", i);
        scanf("%d", &vetor[i]);
        printf("%d\n", vetor[i]);
    }

    return 0;
}