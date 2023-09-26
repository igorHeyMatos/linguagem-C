#include <stdio.h>

int main()
{
    int num, cont = 0;

    for (num = 1000; num < 1100; num++)
    {
        if (num % 11 == 5)
        {
            cont++;
            if (cont == 5)
            {
                printf("Numero final: %d\n", num);
                break;
            }
        }
    }
    return 0;
}