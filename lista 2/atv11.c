#include <stdio.h>
    int main () {
        float valor_pago, valor_compra, troco;
        printf ("Qual o valor da sua compra?");
        scanf("%f",&valor_compra);

        printf("Qual o valor que você pagou?");
        scanf("%f",&valor_pago);

troco = valor_pago - valor_compra;

printf("Seu troco é %.2f",troco);

return 0; }