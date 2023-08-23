#include <stdio.h>

int main()
{
    float num1, num2;
    int conta;

    printf("Digite um numero: ");
    scanf("%f", &num1);

    printf("Digite outro numero: ");
    scanf("%f", &num2);

    printf("Selecione uma opcao 1 para somar, 2 para subtrair, 3 para multiplicar, 4 para dividir: ");
    scanf("%d", &conta);

    switch (conta)
    {
    case 1:
        conta = num1 + num2;
        printf("Resultado da soma sera: %d.", conta);
        break;
    case 2:
        conta = num1 - num2;
        printf("Resultado da subtracao: %d.", conta);
        break;
    case 3:
        conta = num1 * num2;
        printf("Resultado da multiplicacao: %d.", conta);
        break;
    case 4:
        conta = num1 / num2;
        printf("Resultado da divisao: %d.", conta);
        break;
    default:
        printf("Valores invalidos.");
        break;
    }
    return 0;
}