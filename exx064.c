#include <stdio.h>

int main()
{

    int conta[11][11], l, c, soma = 0;

    for (l = 0; l <= 10; l++)
    {
        for (c = 0; c <= 10; c++)
        {
            soma = c * l;
            conta[l][c] = soma;
            printf("%d x %d = %d, ", l, c, conta[l][c]);
        }
        printf("\n");
    }

    return 0;
}