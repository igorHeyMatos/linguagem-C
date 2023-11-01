#include <stdio.h>

int somaValores(int num)
{
    int soma = 0, i;
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("O numero %d eh divisil por %d\n", num, i);
            soma = soma + i;
        }
    }
    return soma;
}

void verificacao(int result, int num)
{
    if (result == num)
    {
        printf("O numero eh perfeito!");
    }
    else
    {
        printf("Nao eh perfeito!");
    }
}

int main()
{

    int num, result;

    printf("Digite um numero: ");
    scanf("%i", &num);

    result = somaValores(num);

    verificacao(result, num);

    return 0;
}