#include <stdio.h>

int main()
{
    int num, menor = 9999999, maior = 0;

    do
    {
        printf("Digite um numero positivo: ");
        scanf("%d", &num);

        if (num <= 0)
        {
            break;
        }

        if (num > maior)
        {
            maior = num;
            printf("Maior: %d\n", maior);
        }

        if (num < menor)
        {
            menor = num;
            printf("Menor: %d\n", menor);
        }
    } while (num > 0);

    printf("Maior numero digitado: %d\n", maior);
    printf("Menor numero digitado: %d", menor);

    return 0;
}