#include <stdio.h>

int main()
{

    int tab[11][11], l, c;

    for (l = 0; l <= 10; l++)
    {
        for (c = 0; c <= 10; c++)
        {
            tab[l][c] = l * c;
            printf("%3d ", tab[l][c]);
        }
        printf("\n");
    }

    return 0;
}