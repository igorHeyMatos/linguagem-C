#include <stdio.h>

int main()
{
    float somaP, somaN, num, cont = 0;

    do
    {
        printf("Digite um numero: ");
        scanf("%f", &num);
        if (num >= 1)
        {
            somaP = somaP + num;
        }
        else if (num <= -1)
        {
            somaN = somaN + num;
        }
        cont++;
    } while (cont <= 4);

    printf("Resultado positivo: %.2f\n", somaP);
    printf("Resultados negativos: %.2f", somaN);
    return 0;
}