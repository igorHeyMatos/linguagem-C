#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[100];
    int i, tamanho, j, t;

    printf("Digite uma palavra: ");
    scanf("%100[^\n]", palavra);

    tamanho = strlen(palavra);

    for (j = 0; j <= tamanho; j++)
    {
        printf("%c", palavra[j]);
    }

    printf("\n");

    for (i = tamanho - 1; i >= 0; i--)
    {
        printf("%c", palavra[i]);
    }

    printf("\n");

    for(t = 0; t <= tamanho; t++){
        if(palavra[j] == palavra[i]){
            printf("Palavra igual de tras para frente");
        } else {
            printf("Nao eh igual");
        }
    }

    return 0;
}