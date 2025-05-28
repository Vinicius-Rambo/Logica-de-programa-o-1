#include <stdio.h>

int main() {
    int i, vetorA[10], vetorB[10];

    printf("- - - Calculadora - - -\n");
    printf("Onde os pares são multiplicados por 5.\n");
    printf("E os ímpares são somados com +5.\n\n");

    for(i = 0; i < 10; i++) {
        printf("Digite seu %.2d° valor: ", i + 1);
        scanf("%d", &vetorA[i]);

        if(vetorA[i] % 2 == 0) {
            vetorB[i] = vetorA[i] * 5;
        } else {
            vetorB[i] = vetorA[i] + 5;
        }
    }

    printf("\n- - - Resultados - - -\n");

    printf("\nPares:\n");
    for(i = 0; i < 10; i++) {
        if(vetorA[i] % 2 == 0) {
            printf("\t[%.2d°] = %d\n", i + 1, vetorB[i]);
        }
    }

    printf("\nÍmpares:\n");
    for(i = 0; i < 10; i++) {
        if(vetorA[i] % 2 != 0) {
            printf("\t[%.2d°] = %d\n", i + 1, vetorB[i]);
        }
    }

    return 0;
}
