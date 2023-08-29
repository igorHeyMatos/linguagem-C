#include <stdio.h>

int main()
{
    int A, B;
    float resultado;

    printf("Digite um numero: ");
    scanf("%d", &A);

    printf("Digite outro numero: ");
    scanf("%d", &B);

    resultado = A * B;

    if (resultado == 0)
    {
        printf("Nulo.");
    }
    else if (resultado >= 1)
    {
        printf("Sinal positivo.");
    }
    else if (resultado <= -1)
    {
        printf("Sinal negativo.");
    }

    return 0;
}