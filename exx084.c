#include <stdio.h>
#include <stdlib.h>

float defPesoIdeal(char sexo, float altura)
{
    float pesoIdeal = 0;
    if (sexo == 'M' || sexo == 'm')
    {
        pesoIdeal = (72.7 * altura) - 58.0;
    }
    else if (sexo == 'S' || sexo == 's')
    {
        pesoIdeal = (62.1 * altura) - 44.7;
    }
    else
    {
        printf("Impossivel de calcular");
        exit(1);
    }
    printf("Peso ideal: %.1f\n", pesoIdeal);
    return pesoIdeal;
}

void situacao(float peso, float result)
{
    if (peso == result)
    {
        printf("Esta no peso ideal");
    }
    else if (peso < result)
    {
        printf("Esta abaixo do peso ideal");
    }
    else
    {
        printf("Esta acima do peso ideal");
    }
}

int main()
{

    char sexo;
    float altura, peso, result;

    printf("Digite seu sexo: ");
    scanf(" %c", &sexo);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    result = defPesoIdeal(sexo, altura);
    situacao(peso, result);
}