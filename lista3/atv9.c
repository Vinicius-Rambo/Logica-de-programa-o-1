#include <stdio.h> 
#include <math.h> 


int main (){
    int normal, milhar, milhar_2, centena, centena_2, dezena, dezena_2, somado;

    printf("Qual é seu numero inteiro e positivo?");
    scanf("%u", &normal);/* %U significa que é um numero inteiro POSITIVO. */

    milhar = normal / 1000;
    milhar_2 = normal % 1000;

    centena = milhar_2 / 100;
    centena_2 = milhar_2 % 100;

    dezena = centena_2 / 10;
    dezena_2 = centena_2 % 10;

somado = milhar + centena + dezena + dezena_2;

printf("A soma dos 4 algarismos do numero %d é: %d", normal, somado);
return 0;
}
