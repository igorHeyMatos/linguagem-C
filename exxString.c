#include <stdio.h>

int main()
{

    char nome[101];

    printf("Digite seu nome: ");
    fgets(nome, 101, stdin);

    printf("Prazer %s", nome);
    return 0;
}