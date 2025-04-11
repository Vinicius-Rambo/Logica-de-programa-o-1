#include <stdio.h>
#include <math.h>

int main () {
    float num, raiz, cubo;
    printf("Digite seu número: ");
        scanf("%f", &num);
    
    if (num > 0){

        raiz = sqrt(num); 
        printf("A raiz do seu numero real é %.2f");}
        
    else if (num < 0){
        cubo = pow(num, 3);           
        printf("O cubo de seu numero real é %2.f");}
        
        else{ 
         printf("Seu numero é invalido");};
        
return 0;
}    