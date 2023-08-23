#include <stdio.h>

int main()
{
    float num1, num2, soma;

    printf("Digite um valor: ");
    scanf("%f", &num1);

    printf("Digite outro valor para somar: ");
    scanf("%f", &num2);

    soma = num1 + num2;

    printf("O resultado da soma dos valores sera: %.2f", soma);

    return 0;
}