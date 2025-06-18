#include <stdio.h>

int main(){

int valor_1, valor_2, trocado;

printf("Insira dois valores:\n");
scanf("%d" "%d", &valor_1, &valor_2);

printf("O 1º valor é: %d, o 2ºvalor é: %d \n",valor_1, valor_2); 

trocado = valor_1;
valor_1 = valor_2;
valor_2 = trocado;

printf("O 1º valor é: %d, o 2º valor é: %d", valor_1, valor_2);
   
return 0;
}