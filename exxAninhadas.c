#include <stdio.h>

int main()
{
    int i, num;

    do
    {
        printf("\nDigite um valor inteiro positivo ou digite 0 para sair: ");
        scanf("%d", &num);

        if (num < 0)
        {
            printf("Digite valores positivos.\n");
        }
        else if (num == 0)
        {
            printf("Encerrando execucao...");
        }
        else
        {
            for (i = 1; i <= num; i++)
            {
                printf("*");
            }
        }
    } while (num != 0);

    return 0;
}