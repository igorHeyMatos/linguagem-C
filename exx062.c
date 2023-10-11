#include <stdio.h>
#include <string.h>

int main()
{

    char frase[200];
    int j, tamanho, a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("Digite uma string: ");
    fgets(frase, 200, stdin);

    tamanho = strlen(frase);

    for (j = 0; j < tamanho - 1; j++)
    {
        frase[j] = toupper(frase[j]);
    }

    for (j = 0; j < tamanho - 1; j++)
    {
        switch (frase[j])
        {
        case 'A':
            a++;
            break;
        case 'E':
            e++;
            break;
        case 'I':
            i++;
            break;
        case 'O':
            o++;
            break;
        case 'U':
            u++;
            break;
        }
    }

    printf("A: %d, E: %d, I: %d, O: %d, U: %d", a, e, i, o, u);
}