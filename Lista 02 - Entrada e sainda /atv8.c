#include <stdio.h> 
#include <math.h> 


int main (){
 float num_a, num_b, num_c, num_d, MQ;

printf("Qual o valor de A?");
scanf ("%f",&num_a);

printf("Qual o valor de B?");
scanf ("%f",&num_b);

printf("Qual o valor de C?");
scanf ("%f",&num_c);

printf("Qual o valor de D?");
scanf ("%f",&num_d);

MQ = sqrt((pow(num_a,2)) + (pow(num_b,2)) +(pow(num_c,2)) + (pow(num_d,2)));

printf("Sua media quadratica é:%.2f", MQ);

return 0;
}


