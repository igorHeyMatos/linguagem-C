#include <stdio.h>

int main()
{

    int P1, C1, P2, C2;

    printf("Digite o peso da crianca no lado esquerdo: ");
    scanf("%d", &P1);

    printf("Digite o peso da crianca no lado direito: ");
    scanf("%d", &P2);

    printf("Digite o peso da gangorra no lado esquerdo: ");
    scanf("%d", &C1);

    printf("Digite o peso da gangorra no lado direito: ");
    scanf("%d", &C2);

    if (P1 < 10 || P1 > 100)
    {
        printf("Valores invalidos!");
    }
    else if (P2 < 10 || P2 > 100)
    {
        printf("Valores invalidos!");
    }
    else if (C1 < 10 || C1 > 100)
    {
        printf("Valores invalidos!");
    }
    else if (C2 < 10 || C2 > 100)
    {
        printf("Valores invalidos!");
    }

    if (P1 * C1 == P2 * C2)
    {
        printf("0");
    }
    else if (P1 * C1 > P2 * C2)
    {
        printf("-1");
    }
    else if (P1 * C1 < P2 * C2)
    {
        printf("+1");
    }
    return 0;
}