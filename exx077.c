#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int mat[3][4], vet[3], l, c, i = 0, soma[3], mult[4];

    // for (l = 0; l < 3; l++)
    // {
    //     for (c = 0; c < 4; c++)
    //     {
    //         mat[l][c] = rand() % 10 + 1;
    //         i++;
    //         if (vet[i] == l)
    //         {
    //             soma = soma + mat[l][c];
    //         }
    //     }
    // }

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 4; c++)
        {
            mat[l][c] = rand() % 10 + 1;
            i++;
            if (vet[l] == l)
            {
                soma[l] = soma[l] + mat[l][c];
            }
            if (vet[c] == c)
            {
                mult[c] = mult[c] * mat[l][c];
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        printf("Soma: %d\n", soma[i]);
        printf("Multiplicacao: %d\n", mult[i]);
    }

    return 0;
}