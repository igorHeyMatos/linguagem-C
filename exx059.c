#include <stdio.h>

int main()
{

    int vetor[8], i, num;

    for (i = 0; i < 8; i++)
    {
        printf("Digite um numero para o indice %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 0; i < 8; i++)
    {
        if (num == vetor[i])
        {
            printf("Valor contido! %d\n", vetor[i]);
        }
    }
    return 0;
}