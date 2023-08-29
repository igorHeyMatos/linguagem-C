#include <stdio.h>

int main()
{
    float notaA, notaB, notaC, notaD, media, notaExame, resultado;

    printf("Digite a notaA do aluno: ");
    scanf("%f", &notaA);

    printf("Digite a notaB do aluno: ");
    scanf("%f", &notaB);

    printf("Digite a notaC do aluno: ");
    scanf("%f", &notaC);

    printf("Digite a notaD do aluno: ");
    scanf("%f", &notaD);

    media = ((notaA * 2) + (notaB * 3) + (notaC * 4) + (notaD * 1)) / 10;

    if (media >= 7)
    {
        printf("Media: %f\n", media);
        printf("Aluno aprovado!");
    }
    else if (media < 5)
    {
        printf("Media: %f\n", media);
        printf("Aluno reprovado!");
    }
    else if (media >= 5 && media <= 6.9)
    {
        printf("Aluno em exame!");
        printf("Digite a nota do exame: ");
        scanf("%f", &notaExame);
        resultado = (media + notaExame) / 2;
        if (resultado >= 5)
        {
            printf("Aluno aprovado!\n");
            printf("Media final: %f", resultado);
        }
        else if (resultado <= 4.9)
        {
            printf("Aluno reprovado!\n");
            printf("Media final: %f", resultado);
        }
    }

    return 0;
}