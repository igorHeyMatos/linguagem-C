#include <stdio.h>

int main()
{
    int num, cont = 1;

    do
    {
        printf("Digite um valor: ");
        scanf("%d", &num);
        cont = num * cont;
        printf("Valor: %d\n", cont);
    } while (cont <= 100);

    return 0;
}