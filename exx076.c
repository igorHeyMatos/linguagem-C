#include <stdio.h>

int main()
{

    int mat[4][4], l, c, somaQuadrado = 0, somaL = 0, somaDiagonal = 0, somaPar = 0;

    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < 4; c++)
        {
            printf("Digite um valor: ");
            scanf("%d", &mat[l][c]);
        }
    }

    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < 4; c++)
        {
            printf("%3d ", mat[l][c]);
        }
        printf("\n");
    }

    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < 4; c++)
        {
            if (c < 1)
            {
                somaQuadrado = somaQuadrado + mat[l][c] * mat[l][c];
            }
            if (l == 2)
            {
                somaL = somaL + mat[l][c];
            }
            if (l == c)
            {
                somaDiagonal = somaDiagonal + mat[l][c];
            }
            if (l == 1 && mat[l][c] % 2 == 0)
            {
                somaPar = somaPar + mat[l][c];
            }
        }
    }

    printf("Soma da primeira coluna: %d\n", somaQuadrado);
    printf("Soma da terceira linha: %d\n", somaL);
    printf("Soma na diagonal principal: %d\n", somaDiagonal);
    printf("Soma dos indices pares na segunda linha: %d", somaPar);

    return 0;
}