#include <stdio.h>

int main(){
    char letra;

    printf("Digite um valor: ");
    scanf("%c", &letra);

    switch (letra){
        case 'a':
            printf("Uma vogal.");
            break;
        case 'e':
            printf("Uma vogal.");
            break;
        case 'i':
            printf("Uma vogal.");
            break;
        case 'o':
            printf("Uma vogal.");
            break;
        case 'u':
            printf("Uma vogal.");
            break;
        default:
            printf("Uma consoante.");
            break;
    }

    return 0;
}