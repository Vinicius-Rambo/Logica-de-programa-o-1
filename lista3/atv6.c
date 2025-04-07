#include <stdio.h>
#include <math.h> 

int main (){
 float num_A, baixo, cima;

 printf("Qual seu numero real?");
 scanf("%f",&num_A);

 baixo = floor(num_A);
 cima = ceil (num_A);

 printf("Seu valor arredondado para baixo é: %.0f\n", baixo);
 printf("Seu valor arredondado para cima é: %.0f\n", cima);

 return 0;
}

