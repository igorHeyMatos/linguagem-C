#include <stdio.h>

int main()
{

    int vet[10], i, vet2[10], j;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (vet[i] % 2 == 0)
        {
            printf("Valor: %d Indice: %d\n", vet[i], i);
        }
    }

    for (j = 0; j < 10; j++)
    {
        printf("Digite um valor 2 vetor: ");
        scanf("%d", &vet2[j]);
    }

    for (j = 0; j < 10; j++)
    {
        if (vet2[j] % 2 == 0)
        {
            vet2[j] = vet2[j] / 2;
            printf("Valor dividido por 2: %d INDICE: %d\n", vet2[j], j);
        }
        if (vet2[j] % 2 == 1)
        {
            vet2[j] = vet2[j] * 3;
            printf("Valor multiplicado por 3: %d INDICE: %d\n", vet2[j], j);
        }
    }

    return 0;
}