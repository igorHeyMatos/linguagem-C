#include <stdio.h>

int main()
{
    int num, contador = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (contador <= 10)
    {
        printf("%d X %d = %d\n", num, contador, num * contador);
        contador = contador + 1;
    }

    return 0;
}