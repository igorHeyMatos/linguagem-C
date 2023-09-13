#include <stdio.h>

int main()
{
    int i, cont = 1;
    float numA, soma;

    numA = 1;

    for (i = 1; cont <= 10; i = i * 3)
    {
        cont++;
        soma = numA * i;
        printf("Valores finais: %.2f\n", soma);
    }

    return 0;
}