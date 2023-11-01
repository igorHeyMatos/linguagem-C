#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int vet[5], i;

    for (i = 0; i < 5; i++)
    {
        vet[i] = rand() % 10 + 1;
        printf("%d\n", vet[i]);
    }

    for(i = 0; i < 5; i++){
        if(vet[j] == vet[i]){
            printf("Numero repetido!");
        } else {
            printf("%d", vet[i]);
        }
    }

    return 0;
}