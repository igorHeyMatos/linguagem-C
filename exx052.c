#include <stdio.h>

int main()
{

    int pesos[4], i;

    for (i = 0; i < 4; i++)
    {
        printf("Digite um numero para o indice %d: ", i);
        scanf("%d", &pesos[i]);
        printf("Valor: %d\n", pesos[i]);
    }

    printf("<------->\n");
    // printf("Valor: %d\n", pesos[0]);
    // printf("Valor: %d\n", pesos[1]);
    printf("Valor: %d\n", pesos[2]);
    // printf("Valor: %d\n", pesos[3]);

    return 0;
}