#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    float mat[5][5];
    int l, c, i, vet[5];

    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            mat[l][c] = rand() % 10 + 1;
            printf("%.2f\t ", mat[l][c]);

            if (l == c)
            {
                vet[c] = mat[l][c];
            }
        }
        printf("\n");
    }

    for (i = 0; i < 5; i++)
    {
        printf("INDICE: %d VALOR: %.2d\n", i, vet[i]);
    }

    return 0;
}