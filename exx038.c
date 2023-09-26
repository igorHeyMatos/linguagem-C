#include <stdio.h>

int main()
{
    int num, i, cont;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (cont = 0; cont < i; cont++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}