#include <stdio.h>
    int main () {
        float valor_compra, desconto, acrescimo;
        printf ("Qual o valor da sua compra?");
        scanf("%f",&valor_compra);

desconto = valor_compra * 0.9;
acrescimo = valor_compra *1.05;

printf("O seu valor com desconto é %.2f", desconto);
printf("O seu valor com acrescimo é %.2f", acrescimo);

return 0; }