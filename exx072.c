#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int mat[10][15], l, c, soma = 0;

    for (l = 0; l < 10; l++)
    {
        for (c = 0; c < 15; c++)
        {
            mat[l][c] = rand() % 11 + 1;
            printf("%3d ", mat[l][c]);
        }
        printf("\n");
    }

    for (l = 0; l < 10; l++)
    {
        soma = 0;
        for (c = 0; c < 15; c++)
        {
            soma = soma + mat[l][c];
        }
        printf("Linha %d Soma %d ", l, soma);
        if (soma % 2 == 0)
        {
            printf("Soma eh par!\n");
        }
        else
        {
            printf("Soma eh impar!\n");
        }
    }

    for (c = 0; c < 15; c++)
    {
        soma = 0;
        for (l = 0; l < 10; l++)
        {
            soma = soma + mat[c][l];
        }
        printf("Soma colunas: %d Valor: %d ", c, soma);
        if (soma % 2 == 0)
        {
            printf("Coluna eh par!\n");
        }
        else
        {
            printf("Coluna eh impar!\n");
        }
    }

    return 0;
}