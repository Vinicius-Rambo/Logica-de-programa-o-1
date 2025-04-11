#include <stdio.h>
int main () {
    float valor, reajustado;
 
    printf("Qual o valor do seu salario?: ");
    scanf("%f", &valor);

    if(valor > 0.00 && valor < 999.00){
        reajustado = valor * 1.2;
        printf("Seu salario será: %.2f", reajustado);}

     else if(valor > 990.01 && valor < 1480.00){
        reajustado = valor * 1.1;
        printf("Seu salario será: %.2f", reajustado);}

     else if(valor > 1480.01 && valor < 2000.00){
        reajustado = valor * 1.05;
        printf("Seu salario será: %.2f", reajustado);}    

      else { 
         printf("Seu salario não será ajustado");}        

return 0;}    