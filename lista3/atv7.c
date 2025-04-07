#include <stdio.h> 

int main (){
 float num_a, num_b, num_c, num_d, MH;
 
printf("Qual o valor de A?");
scanf ("%f",&num_a);

printf("Qual o valor de B?");
scanf ("%f",&num_b);

printf("Qual o valor de C?");
scanf ("%f",&num_c);

printf("Qual o valor de D?");
scanf ("%f",&num_d);

MH = 4/ ((1/num_a) + (1/num_b) + (1/num_c) + (1/num_d)); 

printf("Sua media harmonica é:%.2f", MH);

return 0;
}
