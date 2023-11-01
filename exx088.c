#include <stdio.h>

float converter(float celsius)
{
    float resultado;
    resultado = (celsius * 9 / 5) + 32;
    return resultado;
}

int main()
{

    float celsius, result;

    printf("Digite quantos graus esta: ");
    scanf("%f", &celsius);

    result = converter(celsius);

    printf("Resultado: %.2f", result);

    return 0;
}