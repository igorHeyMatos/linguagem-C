#include <stdio.h>

int main()
{
    float notaAluno;

    printf("Digite a nota do aluno: ");
    scanf("%f", &notaAluno);

    if (notaAluno == 0)
    {
        printf("Nota: E");
    }
    else if (notaAluno >= 1 && notaAluno <= 35)
    {
        printf("Nota: D");
    }
    else if (notaAluno >= 36 && notaAluno <= 60)
    {
        printf("Nota: C");
    }
    else if (notaAluno >= 61 && notaAluno <= 80)
    {
        printf("Nota: B");
    }
    else if (notaAluno >= 81 && notaAluno <= 100)
    {
        printf("Nota: A");
    }
    else if (notaAluno <= -1 || notaAluno >= 101)
    {
        printf("Valor invalido!");
    }

    return 0;
}