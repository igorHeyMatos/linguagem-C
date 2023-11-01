#include <stdio.h>

float media(float nota1, float nota2, float nota3)
{
    float soma, resultado;
    soma = nota1 + nota2 + nota3;
    resultado = soma / 3;
    return resultado;
}

int main()
{

    float nota1, nota2, nota3, valorFinal;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    valorFinal = media(nota1, nota2, nota3);

    printf("Valor final: %.2f", valorFinal);

    return 0;
}