#include <stdio.h>

int main()
{

    int empresa[3][6], l, f, soma = 0, cont = 0, media;

    for (l = 0; l < 3; l++)
    {
        for (f = 0; f < 6; f++)
        {
            printf("Digite o salario: ");
            scanf("%d", &empresa[l][f]);
            soma = soma + empresa[l][f];
            if (empresa[l][f] > 2000)
            {
                cont++;
            }
            if (l == 1)
            {
                media = soma / 6;
            }
        }
    }

    for (l = 0; l < 3; l++)
    {
        for (f = 0; f < 6; f++)
        {
            printf("| %3d %3d |", l, empresa[l][f]);
        }
        printf("\n");
    }

    printf("Soma total: %d\n", soma);

    printf("Quantidade de funcionarios que recebem mais que 2000: %d\n", cont);

    printf("Media da segunda loja: %d", media);

    return 0;
}