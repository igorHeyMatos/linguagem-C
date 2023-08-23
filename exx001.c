#include <stdio.h>

int main(){
    float num1, num2;

    printf("Digite um numero: ");
    scanf("%f", &num1);

    printf("Digite um numero: ");
    scanf("%f", &num2);

    if(num1 > num2){
        printf("%f eh maior e %f eh menor", num1, num2);
    } else if(num2 > num1){
        printf("%f eh maior e %f eh menor", num2, num1);
    } else if(num1 == num2){
        printf("Os numeros sao iguais.");
    }

    return 0;
}