#include <stdio.h>

int main()
{
    int num, soma = 0, cont = 1;

    while (cont <= 10)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma = soma + num;
        cont++;
    }

    printf("Valor total: %d\nMedia: %d", soma, soma / 10);

    return 0;
}