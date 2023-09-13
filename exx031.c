#include <stdio.h>

int main()
{
    int num, numS = 0, cont = 0;
    float media;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num >= 1)
        {
            numS = numS + num;
            cont++;
            media = numS / cont;
        }
    } while (num != 0);

    printf("Resultado: %.2f", media);

    return 0;
}