#include <stdio.h>

int main()
{

    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho], i, soma = 0;

    for (i = 0; i < tamanho; i++)
    {
        printf("Digite um valor para o indice %d: ", i);
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
        printf("INDICE : %d | VALOR : %d\n", i, vetor[i]);
    }

    printf("VALOR FINAL: %d", soma);

    return 0;
}