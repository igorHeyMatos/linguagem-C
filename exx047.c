#include <stdio.h>

int main()
{
    int numCarteira, numMulta, maior = 0, numMaior, i;
    float valorMulta, somaMulta = 0.0, totalMulta = 0.0;

    do
    {
        somaMulta = 0.0;
        printf("Digite o numero da carteira: ");
        scanf("%d", &numCarteira);

        if (numCarteira == 0)
        {
            break;
        }

        printf("Digite a quantidade de multas: ");
        scanf("%d", &numMulta);

        for (i = 1; i <= numMulta; i++)
        {
            printf("Digite o valor da multa %d: ", i);
            scanf("%f", &valorMulta);
            somaMulta = somaMulta + valorMulta;
        }

        totalMulta = totalMulta + somaMulta;

        printf("CNH: %d Multas %.2f\n", numCarteira, somaMulta);
        printf("Total arrecadado multas: %.2f\n", totalMulta);

        if (numMulta > maior)
        {
            maior = numMulta;
            numMaior = numCarteira;
        }

    } while (numCarteira >= 1 && numCarteira <= 4327);
    printf("Carteira com maior numero de multas: %d\n", numMaior);
    return 0;
}