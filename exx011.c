#include <stdio.h>

int main()
{
    float valor_pagar, qnt_item;
    int codigo;

    printf("<---Cachorro Quente 1--->\n");
    printf("<---   X Salada 2    --->\n");
    printf("<---   X Bacon 3     --->\n");
    printf("<---Torrada simples 4--->\n");
    printf("<--- Refrigerante 5  --->\n");

    printf("Digite o codigo do item: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade do item: ");
    scanf("%f", &qnt_item);

    switch (codigo)
    {
    case 1:
        printf("Cachorro-quente.\n");
        valor_pagar = qnt_item * 12.0;
        printf("Valor total a pagar: %.2f", valor_pagar);
        break;
    case 2:
        printf("X-Salada.\n");
        valor_pagar = qnt_item * 15.50;
        printf("Valor total a pagar: %.2f", valor_pagar);
        break;
    case 3:
        printf("X-Bacon.\n");
        valor_pagar = qnt_item * 18.0;
        printf("Valor total a pagar: %.2f", valor_pagar);
        break;
    case 4:
        printf("Torrada simples.\n");
        valor_pagar = qnt_item * 8.0;
        printf("Valor total a pagar: %.2f", valor_pagar);
        break;
    case 5:
        printf("Refrigerante.\n");
        valor_pagar = qnt_item * 4.50;
        printf("Valor total a pagar: %.2f", valor_pagar);
        break;
    }

    return 0;
}