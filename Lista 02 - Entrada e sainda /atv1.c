#include <stdio.h>
#include <math.h> 

int main () {

 float media;
 int valor_1, valor_2, valor_3;

printf("Qual seu primeiro valor?");
scanf("%d", &valor_1);

printf("Qual seu segundo valor?");
scanf("%d", &valor_2);

printf("Qual seu terceiro valor?");
scanf("%d", &valor_3);

media = (float) (valor_1 + valor_2 + valor_3)/3;

printf ("Sua media é %.2f", media);

return 0;
}