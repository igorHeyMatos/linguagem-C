#include <stdio.h>

int main()
{
    int codigo;

    printf("Digite um codigo: ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        printf("Cafe com leite");
        break;
    case 2:
        printf("Cafe preto");
        break;
    case 3:
        printf("Chocolate quente");
        break;
    case 4:
        printf("Pao de queijo");
        break;
    case 5:
        printf("Coxinha");
        break;
    case 6:
        printf("Pastel");
        break;
    default:
        printf("Codigo invalido");
        break;
    }

    return 0;
}