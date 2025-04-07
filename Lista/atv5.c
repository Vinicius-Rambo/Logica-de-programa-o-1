#include <stdio.h>
int main(){
    float comprimento, largura, metros, preco, total;
    printf("qual o comprimento?");
     scanf("%f",&comprimento);

     printf("qual a largura?");
     scanf("%f",&largura);

     metros = comprimento * largura;
      printf("Você tem %.2f metros quadrados\n",metros);
      printf("Qual o valor do metro quadrado?");
      scanf("%f", &preco);

total = metros * preco;
 printf("seu total é %.2f",total);
 return 0;}