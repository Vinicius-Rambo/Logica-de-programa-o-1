#include <stdio.h>

int main() {
    int n, i, escalar = 0;
    int vetorX[100], vetorY[100];  // Vetores com tamanho fixo
    
    do {
        printf("Digite o tamanho dos vetores (1 a 100): ");
        scanf("%d", &n);
        if (n <= 0 || n > 100) {
            printf("Valor inválido! Tente novamente.\n");
        }
    } while (n <= 0 || n > 100);

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

    for(i = 0; i < n; i++) {
        escalar += vetorX[i] * vetorY[i];
    }

    printf("\n- - - Resultado - - -\n");
    printf("O produto escalar é: %d\n", escalar);

    return 0;
}
