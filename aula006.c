#include <stdio.h>

int main()
{
    int idade;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    if (idade < 18)
    {
        printf("A pessoa eh menor de idade! \n");
    }

    printf("A pessoa tem %d anos.", idade);

    return 0;
}