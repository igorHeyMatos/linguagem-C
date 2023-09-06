#include <stdio.h>

int main(){
    int num, cont = 1;

    do{
        if(cont % 2 == 1){
            num = num + cont;
            cont++;
            printf("Resultado: %d",num);
        }
        
    } while(cont <= 20);
}