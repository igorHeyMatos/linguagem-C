#include <stdio.h>

int main()
{
    int A, B;
    float resultadoA, resultadoB;

    printf("Digite um numero: ");
    scanf("%d", &A);

    printf("Digite um numero: ");
    scanf("%d", &B);

    resultadoA = A % B;
    resultadoB = B % A;

    if (resultadoA == 0 || resultadoB == 0)
    {
        printf("Sao multiplos!");
    }
    else
    {
        printf("Nao sao multiplos!");
    }

    return 0;
}