#include <stdio.h>

int main(){
    int idade_crianca;

    printf("Digite a idade da crianca: ");
    scanf("%d", &idade_crianca);

    if(idade_crianca == 4 || idade_crianca == 5){
        printf("Turma A");
    } else if(idade_crianca >= 6 && idade_crianca <= 8){
        printf("Turma B");
    } else if(idade_crianca == 9 || idade_crianca == 10){
        printf("Turma C");
    } else if(idade_crianca < 4 || idade_crianca > 10){
        printf("Sem turma!");
    }

    return 0;
}