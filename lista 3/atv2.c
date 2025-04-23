#include <stdio.h>

int main () {
    float compra, valor_parcelado;

    printf("Qual o valor da sua compra?");
    scanf("%f", &compra);

valor_parcelado = (compra / 5);
printf("Compra parcelada \n");
printf("5 X %.2f = %.2f", valor_parcelado, compra);

return 0; } 