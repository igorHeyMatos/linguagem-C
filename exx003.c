#include <stdio.h>

int main()
{
    float salario_atual, salario_corrigido;

    printf("Digite o seu salario atual: ");
    scanf("%f", &salario_atual);

    if (salario_atual <= 1400.00)
    {
        salario_corrigido = salario_atual * 1.15;
        printf("Salario corrigido: %.2f", salario_corrigido);
    }
    else if (salario_atual <= 2000.00)
    {
        salario_corrigido = salario_atual * 1.12;
        printf("Salario corrigido: %.2f", salario_corrigido);
    }
    else if (salario_atual <= 3000.00)
    {
        salario_corrigido = salario_atual * 1.10;
        printf("Salario corrigido: %.2f", salario_corrigido);
    }
    else if (salario_atual <= 3800.00)
    {
        salario_corrigido = salario_atual * 1.07;
        printf("Salario corrigido: %.2f", salario_corrigido);
    }
    else if (salario_atual <= 5000.00)
    {
        salario_corrigido = salario_atual * 1.04;
        printf("Salario corrigido: %.2f", salario_corrigido);
    }
    else if (salario_atual > 5000.00)
    {
        printf("Sem aumento.");
    }

    return 0;
}