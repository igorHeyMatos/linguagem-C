#include <stdio.h>

int main()
{
    int num, i = 0;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num >= 100 && num <= 200)
        {
            i++;
        }
    } while (num != 0);

    printf("Total: %d", i);

    return 0;
}