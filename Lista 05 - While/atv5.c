#include <stdio.h>
#include <math.h>
int main(){

    int i=1, quadrado, cubo;
    printf(" - - Mostrar quadrados e Cubos (0 a 10) - -\n");
    while (i <= 10){
        printf("------------------------------------------\n");
        printf ("Numero: %d\n", i);
        quadrado = pow(i, 2);
        cubo = pow(i, 3);
     
        printf("Quadrado: %d\n", quadrado);
        printf("Cubo:     %d\n", cubo);
    
        i++;
    }
        return 0;}