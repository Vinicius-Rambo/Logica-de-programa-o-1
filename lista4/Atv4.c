#include <stdio.h>
#include <math.h>

int main() {
    float num, raiz, cubo;
    
    printf("Digite seu número: ");
    scanf("%f", &num);
    
    if (num > 0) {
        raiz = sqrt(num); 
        printf("A raiz do seu número real é %.2f\n", raiz);
    } else if (num < 0) {
        cubo = pow(num, 3);           
        printf("O cubo do seu número real é %.2f\n", cubo);
    } else {
        printf("Você digitou zero.\n");
    }
    
    return 0;
}
