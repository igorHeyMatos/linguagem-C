#include <stdio.h>

int main()
{
    int limA, limB, i, soma = 0;

    printf("Limite A: ");
    scanf("%d", &limA);

    printf("Limite B: ");
    scanf("%d", &limB);

    for (i = limA; i < limB; i++)
    {
        if (i % 2 == 0)
        {
            soma = soma + i;
            printf("I:%d\n", i);
        }
    }

    printf("Soma: %d", soma);

    return 0;
}