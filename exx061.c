#include <stdio.h>
#include <string.h>

int main()
{

    char palavra[100];
    int i, tamanho;

    printf("Digite uma palavra: ");
    scanf("%100[^\n]", palavra);

    printf("Imprimindo com printf: %s\n", palavra);

    tamanho = strlen(palavra);

    printf("Palavra ao contrario: ");
    for (i = tamanho - 1; i >= 0; i--)
    {
        printf("%c", palavra[i]);
    }

    return 0;
}