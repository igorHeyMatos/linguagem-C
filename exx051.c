#include <stdio.h>

int main()
{
    int acao, G = 0, S = 0;

    do
    {
        printf("<-Digite 1 para 10 pontos para Grifinoria---------->\n");
        printf("<-Digite 2 para 10 pontos para Sonserina----------->\n");
        printf("<-Digite 3 para Grifinoria capturar o pomo de ouro->\n");
        printf("<-Digite 4 para Sonserina capturar o pomo de ouro-->\n");
        printf("Digite a acao das equipes: ");
        scanf("%d", &acao);
        switch (acao)
        {
        case 1:
            printf("Grifinoria faz um gol!\n");
            printf("Mais 10 PONTOS para Grifinoria!\n");
            G = G + 10;
            break;
        case 2:
            printf("Sonserina faz um gol!\n");
            printf("Mais 10 PONTOS para Sonserina!\n");
            S = S + 10;
            break;
        case 3:
            printf("Grifinoria captura o pomo de ouro!\n");
            printf("MAIS 150 PONTOS PARA GRIFINORIA!\n");
            printf("Jogo encerrado!\n");
            G = G + 150;
            break;
        case 4:
            printf("Sonserina captura o pomo de ouro!\n");
            printf("MAIS 150 PONTOS PARA SONSERINA!\n");
            printf("Jogo encerrado!\n");
            S = S + 150;
            break;
        }
    } while (acao == 1 || acao == 2);

    printf("Grifinoria: %d\n", G);
    printf("Sonserina: %d\n", S);

    return 0;
}