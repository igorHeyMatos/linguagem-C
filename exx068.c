#include <stdio.h>

int main()
{

    float salario[3][6];
    int l, f;

    for (l = 0; l < 3; l++)
    {
        for (f = 0; f < 6; f++)
        {
            printf("Digite o salario do funcionario: ");
            scanf("%f", &salario[l][f]);
        }
        printf("%.2f ", salario[l * 1.0][f * 1.0]);
        printf("\n");
    }

    return 0;
}