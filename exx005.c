#include <stdio.h>

int main()
{
    float valor_total, valor_compra;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    if (valor_compra >= 500.00)
    {
        valor_total = (valor_compra * (1.0 - 15 / 100.00));
        printf("Desconto de: 15 porcento e o valor total a ser pago eh: %f", valor_total);
    }
    else if (valor_compra >= 200.00 && valor_compra <= 499.00)
    {
        valor_total = (valor_compra * (1.0 - 10 / 100.00));
        printf("Desconto de: 10 porcento e o valor total a ser pago eh: %f", valor_total);
    }
    else if (valor_compra < 200.00)
    {
        valor_total = (valor_compra * (1.0 - 5 / 100.00));
        printf("Desconto de: 5 porcento e o valor total a ser pago eh: %f", valor_total);
    }

    return 0;
}