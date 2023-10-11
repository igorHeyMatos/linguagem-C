#include <stdio.h>

int main()
{

    int matriz[3][5], l, c, soma = 0;

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 5; c++)
        {
            if (c == 4)
            {
                soma = soma + c;
            }
        }
    }

    matriz[3][5] = soma;
    printf("%d", matriz[3][5]);

    return 0;
}