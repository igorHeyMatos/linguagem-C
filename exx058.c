#include <stdio.h>

int main()
{

    int pesos[6], i, soma = 0, maior = 0, menor = 20, pesq;

    for (i = 0; i < 6; i++)
    {
        do
        {
            printf("Digite um numero: ");
            scanf("%d", &pesos[i]);
            if (pesos[i] <= 0 || pesos[i] >= 21 || pesos[i] % 2 != 0)
            {
                printf("Digite um valor valido!\n");
            }
        } while (pesos[i] <= 0 || pesos[i] >= 21 || pesos[i] % 2 != 0);

        soma = soma + pesos[i];

        if (pesos[i] > maior)
        {
            maior = pesos[i];
        }
        if (pesos[i] < menor)
        {
            menor = pesos[i];
        }
    }

    printf("Media: %d\n", soma / 6);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    printf("Digite o valor a ser pesquisado no vetor: ");
    scanf("%d", &pesq);

    for (i = 0; i < 6; i++)
    {
        if (pesq == pesos[i])
        {
            printf("Valor contido!");
            break;
        }
    }

    return 0;
}