#include <stdio.h>

int main(){
    float notaA, notaB, media;

    printf("Digite a notaA do aluno: ");
    scanf("%f", &notaA);

    printf("Digite a notaB do aluno: ");
    scanf("%f", &notaB);

    media = (notaA + notaB) / 2;

    if(media >= 7){
        printf("Aprovado!");
    }else if(media >= 5){
        printf("Em recuperacao!");
    } else {
        printf("Reprovado!");
    }

    return 0;
}