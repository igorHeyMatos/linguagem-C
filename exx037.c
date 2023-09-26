#include <stdio.h>

int main()
{
    int num, i = 1;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num == 2 || num % 2 == 1)
        {
            printf("Numero primo!\n");
        }
        else
        {
            printf("Numero nao eh primo!\n");
        }
        i++;
    } while (i <= 5);

    return 0;
}