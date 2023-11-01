#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int matriz[4][4], l, c, mult = 1;

    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < 4; c++)
        {
            matriz[l][c] = rand() % 10 + 1;
            printf("%3d", matriz[l][c]);

            if (l == c)
            {
                mult = mult * matriz[l][c];
            }
        }
        printf("\n");
    }

    printf("Resultado: %d", mult);

    return 0;
}