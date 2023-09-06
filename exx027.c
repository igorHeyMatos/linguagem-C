#include <stdio.h>

int main()
{
    int num, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;

    do
    {
        printf("Digite um valor positivo: ");
        scanf("%d", &num);

        if (num > 100)
        {
            printf("Numero fora do intervalo!\n");
            break;
        }

        if (num >= 0 && num <= 25)
        {
            cont1++;
        }
        else if (num >= 26 && num <= 50)
        {
            cont2++;
        }
        else if (num >= 51 && num <= 75)
        {
            cont3++;
        }
        else if (num >= 76 && num <= 100)
        {
            cont4++;
        }
    } while (num >= 0);

    printf("Intervalo 1: %d\n", cont1);
    printf("Intervalo 2: %d\n", cont2);
    printf("Intervalo 3: %d\n", cont3);
    printf("Intervalo 4: %d\n", cont4);

    return 0;
}