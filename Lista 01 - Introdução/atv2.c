#include <stdio.h> 
   int main () {
    float real,dolar_valor,dolar_cota;

    printf("Digite o valor em dolar");
    scanf("%f",&dolar_valor);

    printf("Digite o valr da cotação");
    scanf("%f",&dolar_cota);

    real = dolar_valor * dolar_cota;
     printf("O valor do real é %.2f",real);
     return 0; }
