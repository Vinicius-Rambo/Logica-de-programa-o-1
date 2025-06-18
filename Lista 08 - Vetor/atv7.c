#include <stdio.h>

int main() {
    int vetor[20], i, menor, maior;

    for(i = 0; i<20; i++){
        do{
            printf("Digite o %.2d° valor (positivo): ", i);
            scanf("%d", &vetor[i]);
             if(vetor[i]< 0){
                printf("\nValor invalido! digite novamente\n"); }
        }while(vetor[i]< 0);
    }

    menor = vetor[0];
    maior = vetor[0];

    for(i = 0; i<20; i++){
        if(vetor[i] < menor) {
        menor = vetor[i];}
    }   

    for(i = 0; i<20; i++){
        if(vetor[i] > maior) {
        maior = vetor[i];}
    }    

printf("\nmaior valor: %d\n", maior);
for(i = 0; i < 20; i++) {
        if(vetor[i] == maior) {
             printf("\t\t[ %.2d ] = %.2d\n", i, maior); 
        }    
}

printf("\nmenor valor: %d\n", menor);      
for(i = 0; i < 20; i++) {
        if(vetor[i] == menor) {
             printf("\t\t[ %.2d ] = %.2d\n", i, menor); 
        }    
}        
return 0;}    