#include <stdio.h>

int main()
{

    int mat[5][5], num, l, c, i = 0;

    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            printf("Digite um numero: ");
            scanf("%d", &mat[l][c]);
        }
    }

    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            printf("%3d ", mat[l][c]);
        }
        printf("\n");
    }

    printf("Digite um numero para descobrir o multiplo: ");
    scanf("%d", &num);

    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            if (mat[l][c] % num == 0)
            {
                printf("Numero multiplo: %3d \n", mat[l][c]);
                i++;
            }
        }
    }

    printf("Total de numeros multiplos: %d", i);

    return 0;
}