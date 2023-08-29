#include <stdio.h>

int main()
{
    float num_copias, valor_total;

    printf("Digite o numero de copias: ");
    scanf("%f", &num_copias);

    if (num_copias >= 1 && num_copias <= 100)
    {
        valor_total = num_copias * 0.25;
        printf("Valot total: %.2f", valor_total);
    }
    else if (num_copias >= 101)
    {
        valor_total = (100 * 0.25) + (num_copias - 100) * 0.20;
        printf("Valor total: %.2f", valor_total);
    }

    return 0;
}