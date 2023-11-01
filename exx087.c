#include <stdio.h>

void verificador(num)
{
    if (num % 2 == 0 || num % 3 == 0)
    {
        printf("Eh divisivel por 2 e 3");
    }
    else
    {
        printf("Valor invalido");
    }
}

int main()
{

    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    verificador(num);

    return 0;
}