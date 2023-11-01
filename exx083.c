#include <stdio.h>

int lerValor()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    return num;
}

void maior(int a, int b, int c)
{
    int maior = 0;
    if(a > maior){
        maior = a;
    }
    if(b > maior){
        maior = b;
    }
    if(c > maior){
        maior = c;
    }
    printf("Maior valor: %d", maior);
}

int main()
{
    int a, b, c;

    a = lerValor();
    b = lerValor();
    c = lerValor();
    maior(a,b,c);

    return 0;
}