#include <stdio.h>

int main()
{
    float positivo, negativo, somaP = 0, somaN = 0;
    int cont = 1;

    do
    {
        printf("Digite um numero: ");
        scanf("%f", &positivo);
        somaP = somaP + positivo;
        printf("Digite um numero negativo: ");
        scanf("%f", &negativo);
        somaN = somaN + negativo;
        cont++;
    } while (cont <= 10);

    printf("Soma valores positivos: %.2f\nSoma valores negativos: %.2f", somaP, somaN);

    return 0;
}