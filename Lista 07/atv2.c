#include <stdio.h>
int main(){
    int anterior = 1, atual = 1, proximo, i = 2;
    
    printf("%d %d ", anterior, atual);

    while (i < 15){
        proximo = anterior + atual;
        printf("%d ", proximo);

        anterior = atual;
        atual = proximo;
        i++;
    }
    return 0;}
    