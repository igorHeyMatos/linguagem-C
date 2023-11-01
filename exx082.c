#include <stdio.h>

int lerValor()
{
    int num;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    return num;
}

void imprimeSeq(int a, int b)
{
    int i;
    if (a <= b)
    {
        for (i = a; i <= b; i++)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        printf("A deve ser menor que B!\n");
    }
}

int main()
{

    int a, b;
    char resp;
    do
    {
        a = lerValor();

        b = lerValor();

        imprimeSeq(a, b);

        printf("Deseja continuar [S/N]:");
        scanf(" %c", &resp);
    } while (resp == 's' || resp == 'S');

    return 0;
}