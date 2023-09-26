#include <stdio.h>

int main()
{

    int J, V, i = 1, maior = 0;

    printf("Digite a quantidade de Jabutis: ");
    scanf("%d", &J);

    if (J < 1 || J > 100)
    {
        printf("Valores invalidos!\n");
    }

    do
    {
        printf("Insira a velocidade de cada Jabuti: ");
        scanf("%d", &V);
        if (V >= 1 && V <= 500)
        {
            if (V > maior)
            {
                maior = V;
            }
            i++;
        }
    } while (i <= J);

    printf("Jabuti mais veloz: %d", maior);

    return 0;
}