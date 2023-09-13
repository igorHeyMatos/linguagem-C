#include <stdio.h>

int main()
{
    int num, somaP = 0, somaI = 0, mediaI, cont = 0;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            somaP = somaP + num;
        }
        else if (num % 2 == 1)
        {
            cont++;
            somaI = somaI + num;
            mediaI = somaI / cont;
        }
    } while (num != 0);

    printf("Media impares: %d\n", mediaI);
    printf("Valores pares: %d", somaP);

    return 0;
}