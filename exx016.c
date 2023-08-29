#include <stdio.h>

int main()
{
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if (num < 0 || num > 100)
    {
        printf("Fora de intervalo!");
    }
    else if (num >= 0 && num <= 25)
    {
        printf("Se encontra entre [0 e 25].");
    }
    else if (num > 25 && num <= 50)
    {
        printf("Se encontra entre [25 e 50].");
    }
    else if (num > 50 && num <= 75)
    {
        printf("Se encontra entre [50 e 75].");
    }
    else if (num > 75 && num <= 100)
    {
        printf("Se encontra entre [75 e 100].");
    }

    return 0;
}