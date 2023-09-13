#include <stdio.h>

int main()
{
    int i, num, erro;
    double fatorial = 1;

    do
    {
        erro = 0;
        printf("Qual fatorial voce deseja saber? ");
        scanf("%d", &num);
        if (num < 0 || num > 170)
        {
            printf("Tente novamente! Numero invalido!\n");
            erro = 1;
        }
    } while (erro == 1);

    for (i = 1; i <= num; i++)
    {
        fatorial = fatorial * i;
        printf("Cont i: %d Fatorial: %lf\n", i, fatorial);
    }

    return 0;
}