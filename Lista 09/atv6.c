#include <stdio.h>

int main() {
    int vetor[20], i, menor;

    for(i = 0; i<20; i++){
        do{
            printf("Digite o %.2d° valor (positivo): ", i);
            scanf("%d", &vetor[i]);
             if(vetor[i]< 0){
                printf("\nValor invalido! digite novamente\n"); }
        }while(vetor[i]< 0);
    }

    menor = vetor[0];

    for(i = 0; i<20; i++){
        if(vetor[i] < menor) {
        menor = vetor[i];}
    }    
    
printf("\nmenor valor: %d\n", menor);      
for(i = 0; i < 20; i++) {
        if(vetor[i] == menor) {
             printf("\t\t[ %.2d ] = %.2d\n", i, menor); 
        }    
}        
return 0;}   