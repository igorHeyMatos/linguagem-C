#include <stdio.h>

int main()
{
    int N, A, B, tempo_presente;

    printf("Quantos minutos restam para acabar o expediente: ");
    scanf("%i", &N);

    printf("Quanto tempo leva para fabricar o Presente A: ");
    scanf("%i", &A);

    printf("Quanto tempo leva para fabricar o Presente B: ");
    scanf("%i", &B);

    tempo_presente = A + B;

    if (tempo_presente <= N)
    {
        printf("Ele conseguira terminar o trabalho ainda hoje.");
    }
    else if (tempo_presente > N)
    {
        printf("Ele nao conseguira terminar o trabalho hoje.");
    }

    return 0;
}