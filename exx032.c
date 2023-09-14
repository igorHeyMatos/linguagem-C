#include <stdio.h>

int main()
{
    int numA, numB, limite, mdc, cont;

    printf("Digite um numero: ");
    scanf("%d", &numA);

    printf("Digite outro numero: ");
    scanf("%d", &numB);

    if (numA < numB)
    {
        limite = numA;
    }
    else
    {
        limite = numB;
    }

    for (cont = 1; cont <= limite; cont++)
    {
        if (numA % cont == 0 && numB % cont == 0)
        {
            mdc = cont;
            printf("MDC atualizado: %d\n", mdc);
        }
    }

    printf("MDC final: %d", mdc);

    return 0;
}