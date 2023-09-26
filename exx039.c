#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if (n == 2 || n % 2 == 1)
        {
            printf("Numero primo!\n");
        }else {
            printf("Numero nao eh primo!\n");
        }
    } while (n > 0);

    return 0;
}