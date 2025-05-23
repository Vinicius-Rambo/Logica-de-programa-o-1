#include <stdio.h>

int main() {
    int i = 1, final = 0;
    int positivos = 0, pares = 0, impares = 0, divisiveis = 0;
    float soma = 0, soma_pares = 0, soma_impares = 0, soma_divisiveis = 0;
    float media, media_pares, media_impares, media_divisiveis;

    // Entrada com validação
    do {
        printf("Digite o valor inicial: ");
        scanf("%d", &i);
        printf("Digite o valor final: ");
        scanf("%d", &final);

        if (final < i) {
            printf("\n[ERRO] O valor final deve ser maior que o inicial!\n\n");
        }

    } while (final < i);

    // Processamento
    for (int atual = i; atual <= final; atual++) {
        if (atual > 0) {
            positivos++;
            soma += atual;
        }

        if (atual % 2 == 0) {
            pares++;
            soma_pares += atual;
        } else {
            impares++;
            soma_impares += atual;

            if ((atual % 3 == 0) && (atual % 4 == 0)) {
                divisiveis++;
                soma_divisiveis += atual;
            }
        }
    }

    // Cálculo das médias (sem checagem de divisão por zero)
    media = soma / positivos;
    media_pares = soma_pares / pares;
    media_impares = soma_impares / impares;
    media_divisiveis = soma_divisiveis / divisiveis;

    // Saída formatada
    printf("\n----------------------------------------------\n");
    printf("       - - - Resultados da Análise - - -\n");
    printf("----------------------------------------------\n");
    printf(" Total de inteiros positivos:         %d\n", positivos);
    printf(" Total de números pares:              %d\n", pares);
    printf(" Total de números ímpares:            %d\n", impares);
    printf(" Ímpares divisíveis por 3 e 4:        %d\n", divisiveis);
    printf("----------------------------------------------\n");
    printf(" Média dos positivos:                 %.2f\n", media);
    printf(" Média dos pares:                     %.2f\n", media_pares);
    printf(" Média dos ímpares:                   %.2f\n", media_impares);
    printf(" Média dos ímpares div. por 3 e 4:    %.2f\n", media_divisiveis);
    printf("----------------------------------------------\n");

    return 0;
}
