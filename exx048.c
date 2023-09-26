#include <stdio.h>

int main()
{
    int a, b, i, cont;

    do
    {
        printf("Digite um valor para A: ");
        scanf("%d", &a);

        printf("Digite um valor para B: ");
        scanf("%d", &b);
        if (a > b)
        {
            printf("Valores invalidos!\n");
        }
    } while (a > b);

    for (cont = a; cont <= b; cont++)
    {
        for (i = 1; i <= 10; i++)
        {
            printf("Valores: %d x %d = %d\n", cont, i, i * cont);
        }
        printf("<--------------------->\n");
    }

    return 0;
}