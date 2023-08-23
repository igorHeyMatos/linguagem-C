#include <stdio.h>

int main(){
    int N, soma;

    printf("Digite um numero: ");
    scanf("%d", &N);

    if(N > 0){
        printf("%d", N);
    } else if(N < 0){
        soma = (N * -1);
        printf("%d", soma);
    }

    return 0;
}