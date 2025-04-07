#include <stdio.h>
#include <math.h> 

int main () {
    float numero, quadrado, cubo;

    printf("Qual o seu numero?");
    scanf("%f", &numero);

quadrado = pow(numero, 2);
cubo = pow (numero , 3); 

printf("numero\tquadrado\tcubo\n");
printf("%.0f\t %.0f\t \t %.0f", numero, quadrado, cubo);
return 0;}