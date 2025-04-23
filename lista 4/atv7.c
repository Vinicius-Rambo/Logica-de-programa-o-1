#include <stdio.h>
int main () {   
    int lado_a, lado_b, lado_c;
    printf("Qual o seu lado A?: ");
    scanf("%d",&lado_a);

    printf("Qual o seu lado B?:");
    scanf("%d",&lado_b);

    printf("Qual o seu lado C?:");
    scanf("%d",&lado_c);

    if(lado_a + lado_b != lado_c){
        if(lado_a == lado_b && lado_b == lado_c){
            printf("Seu triangulo é Equilátero");}

        else if(lado_a == lado_b && lado_b != lado_c ||
                lado_b == lado_c && lado_a != lado_b ||
                lado_c == lado_a && lado_b != lado_c){ 
            printf("Seu triangulo é Isóceles");}
        
        else{
            printf("Seu triangulo é Escaleno");}}
    else{
        printf("Isso não é um triangulo");} 

return 0;}        
    
