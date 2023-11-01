#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int mat[4][4], l, c;

    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < 4; c++)
        {
            mat[l][c] = rand() % 10 + 1;
            printf("%3d ", mat[l][c]);
        }
        printf("\n");
    }

    printf("<-------------->\n");

    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < 4; c++)
        {
            printf("%3d ", mat[c][l]);
        }
        printf("\n");
    }

    return 0;
}