#include <stdio.h>

int main()
{

    float alturaM, alturaF, alturaN, maior, menor = 999999, mediaF, femS, masS, naoS, mediaP, mediaM, mediaN, somaTotal;
    int i, cont = 2, contF = 0;

    for (i = 1; i <= cont; i++)
    {
        printf("Digite a altura masculina: ");
        scanf("%f", &alturaM);
        printf("Digite a altura feminina: ");
        scanf("%f", &alturaF);
        printf("Digite a altura nao declarados: ");
        scanf("%f", &alturaN);
        if (alturaM > alturaF && alturaM > alturaN)
        {
            maior = alturaM;
            printf("Masculino eh maior!\nTamanho = %.2f\n", maior);
        }
        if (alturaF > alturaM && alturaF > alturaN)
        {
            maior = alturaF;
            printf("Feminino eh maior!\nTamanho = %.2f\n", maior);
        }
        if (alturaN > alturaM && alturaN > alturaF)
        {
            maior = alturaN;
            printf("Nao declarados eh maior!\nTamanho = %.2f\n", maior);
        }
        if (alturaM < alturaF && alturaM < alturaN)
        {
            menor = alturaM;
            printf("Masculino eh menor!\nTamanho = %.2f\n", menor);
        }
        if (alturaF < alturaM && alturaF < alturaN)
        {
            menor = alturaF;
            printf("Feminino eh menor!\nTamanho = %.2f\n", menor);
        }
        if (alturaN < alturaM && alturaN < alturaF)
        {
            menor = alturaN;
            printf("Nao declarados eh menor!\nTamanho = %.2f\n", menor);
        }
        contF++;
        femS = femS + alturaF;
        masS = masS + alturaM;
        naoS = naoS + alturaN;
    }

    mediaF = femS / contF;
    printf("Media das mulheres: %.2f\n", mediaF);

    mediaM = masS / contF;
    mediaN = naoS / contF;
    somaTotal = mediaF + mediaM + mediaN;
    mediaP = somaTotal / 3;
    printf("Media total da populacao: %.2f\n", mediaP);

    return 0;
}