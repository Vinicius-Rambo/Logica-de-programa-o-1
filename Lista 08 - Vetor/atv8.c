#include <stdio.h>
int main(){

int i, vetorA[10], vetorB[10];

printf("- - - Inversão de número da lista do vetor - - -\n");

for(i = 0; i < 10 ; i++){
 printf("Digite seu %.2d° número: ", i + 1);
  scanf("%d", &vetorA[i]);}

for(i = 0; i < 10; i++){
   vetorB[i] = vetorA[9 - i]; 
}


printf("\nVetor A: \n");
for(i = 0; i < 10; i++) {
    printf("\t\t[ %d ] = %.2d\n", i, vetorA[i]); }

printf("\nVetor B: \n");
for(i = 0; i < 10; i++) {
    printf("\t\t[ %d ] = %.2d\n", i, vetorB[i]); }



return 0;}    
