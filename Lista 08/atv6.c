#include <stdio.h>

int main() {
    int  i, contA = 0, contB = 0, contC = 0, contD = 0, contE = 0;
    float codigo, nota,
          somaA = 0, somaB = 0, somaC = 0, somaD = 0, somaE = 0,
          mediaA = 0, mediaB = 0, mediaC = 0, mediaD = 0, mediaE = 0;

    for (i = 1; i <= 1; i++) {
        do {
            printf("Digite o Código do aluno %d: ", i);
            scanf("%d", &codigo);

            printf("Digite a Nota do aluno %d: ", i);
            scanf("%f", &nota);

            if (nota < 0 || nota > 10)
                printf("Nota inválida. Digite novamente.\n");
        } while (nota < 0 || nota > 10);

        if (nota >= 0 && nota <= 2.9) {
            contE++;
            somaE += nota;
        } else if (nota >= 3 && nota <= 4.9) {
            contD++;
            somaD += nota;
        } else if (nota >= 5 && nota <= 6.9) {
            contC++;
            somaC += nota;
        } else if (nota >= 7 && nota <= 8.9) {
            contB++;
            somaB += nota;
        } else if (nota >= 9 && nota <= 10) {
            contA++;
            somaA += nota;
        }
    }

    mediaA = somaA / contA;
    mediaB = somaB / contB;
    mediaC = somaC / contC;
    mediaD = somaD / contD;
    mediaE = somaE / contE;

   printf("  ____                 _ _            _                 _____ _             _     \n");
   printf(" |  _ \\ ___  ___ _   _| | |_ __ _  __| | ___  ___      |  ___(_)_ __   __ _(_)___ \n");
   printf(" | |_) / _ \\/ __| | | | | __/ _ |/ _ |/ _ \\/ __|     | |_  | | '_ \\ / _ | / __| \n");
   printf(" |  _ <  __/\\__ \\ |_| | | || (_| | (_| | (_) \\__ \\     |  _| | | | | | (_| | \\__ \\ \n");
   printf(" |_| \\_\\___||___/\\__,_|_|\\__\\__,_|\\__,_|\\___/|___/     |_|   |_|_| |_|\\__,_|_|___/ \n");
   
    printf("Conceito A: %d alunos - Média: %.2f\n", contA, mediaA);
    printf("Conceito B: %d alunos - Média: %.2f\n", contB, mediaB);
    printf("Conceito C: %d alunos - Média: %.2f\n", contC, mediaC);
    printf("Conceito D: %d alunos - Média: %.2f\n", contD, mediaD);
    printf("Conceito E: %d alunos - Média: %.2f\n", contE, mediaE);

    return 0;
}
