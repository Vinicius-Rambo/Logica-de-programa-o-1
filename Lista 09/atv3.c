#include <stdio.h>
int main(){
int n, i, escalar = 0;

    printf("Digite o Tamanho dos vetores: ");
    scanf("%d", &n);

int vetorX[n], vetorY[n];

printf("\nDigite os elementos do vetor X:\n");
    for(i = 0; i < n; i++) {
        printf("X[%d]: ", i);
        scanf("%d", &vetorX[i]);
    }    

printf("\nDigite os elementos do vetor Y:\n");
    for(i = 0; i < n; i++) {
        printf("Y[%d]: ", i);
        scanf("%d", &vetorY[i]);
    }    

for(i = 0; i<n; i++){
    escalar += vetorX[i] * vetorY[i]; // escalar = escalar + (vetorX[i] * vetorY[i]);
}
printf("\n- - - Resultado - - -\n");
printf("O produto escalar é: %d", escalar);

return 0;}


//Sei que normalmente não se deve utilizar a declaração depois, 
//Mas foi a forma para ficar como no exercicio sem valor pronto.