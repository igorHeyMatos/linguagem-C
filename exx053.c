#include <stdio.h>

int main()
{

    int pesos[6], i, soma = 0;

    for (i = 0; i < 6; i++)
    {
        printf("Digite um numero para o indice %d: ", i);
        scanf("%d", &pesos[i]);
        soma = soma + pesos[i];
        printf("INDICE %d | VALOR = %d\n", i, pesos[i]);
    }

    printf("VALOR FINAL: %d", soma);

    return 0;
}