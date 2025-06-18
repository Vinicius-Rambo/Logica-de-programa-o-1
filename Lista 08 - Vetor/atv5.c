#include <stdio.h>

int main() {
    int vetor[20], i, maior;

    for(i = 0; i<20; i++){
        do{
            printf("Digite o %.2d° valor (positivo): ", i);
            scanf("%d", &vetor[i]);
             if(vetor[i]< 0){
                printf("\nValor invalido! digite novamente\n"); }
        }while(vetor[i]< 0);
    }

    maior = vetor[0];

    for(i = 0; i<20; i++){
        if(vetor[i] > maior) {
        maior = vetor[i];}
    }    
    
printf("\nmaior valor: %d\n", maior);
for(i = 0; i < 20; i++) {
        if(vetor[i] == maior) {
             printf("\t\t[ %d ] = %.2d\n", i, maior); 
        }    
}       
return 0;}    