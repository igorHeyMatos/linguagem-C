#include <stdio.h>

int main()
{
    int num, result;

    printf("Digite um numero: ");
    scanf("%d", &num);

    result = num % 2;

    switch (result){
        case 0:
            if(result == 0){
                printf("O numero eh par!");
            }
            break;
        case 1:
            if(result != 0){
                printf("O numero eh impar!");
            }
            break;
    }
    return 0;
}