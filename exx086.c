#include <stdio.h>
#include <math.h>

int main()
{

    double a, b, result;

    printf("Digite um numero: ");
    scanf("%f", &a);
    printf("Digite outro numero: ");
    scanf("%f", &b);

    result = pow(a, b);

    printf("Resultado: %f", result);

    return 0;
}