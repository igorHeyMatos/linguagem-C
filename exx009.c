#include <stdio.h>

int main()
{
    float valor_compra, pagamento_dois, pagamento_tres;
    int opcao_pagamento;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    printf("Selecione uma opcao de pagamento: ");
    scanf("%d", &opcao_pagamento);

    switch (opcao_pagamento)
    {
    case 1:
        printf("Pagamento a vista: R$ %.2f", valor_compra);
        break;
    case 2:
        printf("Pagamento em duas vezes, acrescimo de 10%%\n");
        pagamento_dois = (valor_compra / 2) * (1.0 + 10.0 / 100.00);
        printf("Valor: R$ %.2f\n", pagamento_dois);
        printf("Valor total: R$ %.2f", valor_compra);
        break;
    case 3:
        printf("Pagamento em tres vezes, acrescimo de 20%%\n");
        pagamento_tres = (valor_compra / 3) * (1.0 + 20.0 / 100.00);
        printf("Valor: R$ %.2f\n", pagamento_tres);
        printf("Valor total: R$ %.2f", valor_compra);
    }

    return 0;
}