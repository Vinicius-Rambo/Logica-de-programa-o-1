#include <stdio.h>
int main(){

float numA, denominador, numerador = 1;

for(denominador = 1; denominador <= 25; denominador++){
    numA = numA + (numerador / denominador);
    numerador = numerador +2;
}

printf("A soma no valor A é: %f", numA);
return 0;}  