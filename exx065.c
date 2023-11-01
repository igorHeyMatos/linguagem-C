#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int matriz[3][5], l, c, soma = 0;

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 5; c++)
        {
            matriz[l][c] = rand() % 100;
            printf("%2d ", matriz[l][c]);
            if (c == 4)
            {
                soma = soma + matriz[l][c];
            }
        }
        printf("\n");
    }

    printf("Soma da ultima coluna: %d", soma);

    return 0;
}