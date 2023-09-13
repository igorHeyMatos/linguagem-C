#include <stdio.h>

int main()
{
    int numA, i, soma, cont = 1;

    numA = 1;

    for (i = 0; cont <= 10; i = i + 3)
    {
        cont++;
        soma = numA + i;
        printf("Valores: %d\n", soma);
    }

    return 0;
}