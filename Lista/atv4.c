#include <stdio.h>
int main(){
    float distancia, combustivel, consumo;
    printf("Qual foi a distancia?");
    scanf("%f",&distancia);

    printf("quanto tinha de combustivel?");
     scanf("%f",&combustivel); 

consumo = distancia / combustivel;
printf("O consumo é %.2f", consumo);
 return 0; }
