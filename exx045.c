#include <stdio.h>

int main()
{

    int N, i;
    float H = 0.0;

    printf("Digite um numero: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        H = H + (1.0 / i);
        printf("1 / %d = %f\n", i, H);
    }

    return 0;
}