#include <stdio.h>

int main() {
    int n, i, j;
    float notas[100][5]; // 4 notas + 1 média
    float soma, soma_geral = 0, media_geral;

    do {
        printf("Digite a quantidade de alunos (max 100): ");
        scanf("%d", &n);
    } while (n > 100 || n <= 0);

    for (i = 0; i < n; i++) {
        soma = 0;

        printf("\nAluno %d:\n", i + 1);

        for (j = 0; j < 4; j++) {
            do {
                printf("Digite a nota %d (0 a 10): ", j + 1);
                scanf("%f", &notas[i][j]);
            } while (notas[i][j] < 0 || notas[i][j] > 10);

            soma += notas[i][j];
        }

        notas[i][4] = soma / 4.0;
        soma_geral += notas[i][4];
    }

    // Exibição dos dados
    printf("\nALUNO\tNOTA1\t\t\tNOTA2\t\t\tNOTA3\t\t\tNOTA4\t\t\tMEDIA\n");

    for (i = 0; i < n; i++) {
        printf("  %d\t", i + 1);
        for (j = 0; j < 5; j++) {
            printf("\t%04.1f\t\t", notas[i][j]);
        }
        printf("\n");
    }

    media_geral = soma_geral / n;
    printf("\nMEDIA GERAL ...................................................: %.1f\n", media_geral);

    return 0;
}
