#include <stdio.h>

int main()
{
    float num, cont = 1, soma;

    do
    {
        printf("Digite um numero: ");
        scanf("%f", &num);
        soma = soma + num;
        cont++;
    } while (num != 0);

    printf("Media total: %.2f", soma / cont);

    return 0;
}