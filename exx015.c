#include <stdio.h>

int main()
{
    float D;

    printf("Digite a distancia em que o robo acertou a cesta: ");
    scanf("%f", &D);

    if (D > 0 && D <= 800)
    {
        printf("Cesta de 1 ponto.");
    }
    else if (D > 800 && D <= 1400)
    {
        printf("Cesta de 2 pontos.");
    }
    else if (D > 1400 && D <= 2000)
    {
        printf("Cesta de 3 pontos.");
    }
    else if (D <= 0 || D > 2000)
    {
        printf("Sem pontos.");
    }

    return 0;
}