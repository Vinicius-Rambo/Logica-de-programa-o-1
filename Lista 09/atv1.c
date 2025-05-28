#include <stdio.h>
int main(){

int i, vetorA[5], vetorB[5];

printf("- - - Calculadora de 5 dobros - - -\n");
for(i = 0; i < 5 ; i++){
 printf("Digite seu %d° valor: ", i + 1);
  scanf("%d", &vetorA[i]);
vetorB[i] = vetorA[i] * 2; }

    printf("\n - - - Resultados: - - - \n");

 for( i = 0; i <5; i++){
    printf("Seu %d° dobro é:  %d\n", i + 1, vetorB[i]); }

return 0;}