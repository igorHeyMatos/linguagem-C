#include <stdio.h>

int main()
{
    float valorLote, numRecibo, valorRecibo, soma, diferenca;

    do
    {
        printf("Digite o valor do lote: ");
        scanf("%f", &valorLote);
        printf("Digite a quantidade de recibos: ");
        scanf("%f", &numRecibo);
        printf("Digite quanto vale cada recibo: ");
        scanf("%f", &valorRecibo);
        soma = numRecibo * valorRecibo;
        if (soma == valorLote)
        {
            printf("LOTE OK!\n");
        }
        else if (soma < valorLote)
        {
            printf("DIFERENCA NEGATIVA!\n");
            diferenca = valorLote - soma;
            printf("Total de diferenca: %.2f\n", diferenca);
        }
        else if (soma > valorLote)
        {
            printf("DIFERENCA POSITIVA!\n");
            diferenca = valorLote - soma;
            printf("Total de diferenca: %.2f\n", diferenca);
        }
    } while (soma == valorLote);

    return 0;
}