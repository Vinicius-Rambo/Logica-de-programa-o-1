#include <stdio.h>
int main(){   
    int i=0, soma = 0;

    printf("A soma de todos os impares entre 0 e 100\n");
    while (i <= 100){
        
        if((i % 2) == 1){
            soma = soma + i;}
             i++;}
             
    printf("a soma é %d", soma);

return 0;}
    
