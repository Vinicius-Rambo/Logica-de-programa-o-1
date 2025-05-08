#include <stdio.h>
#include <ctype.h>

int main() {
    int idade, gostou_cont = 0, recomenda_cont = 0, i = 0;
    char gostou, recomenda;

    printf("- - - Questionario sobre o filme - - - \n");
    printf("escreva '0' em idade para sair\n");

    do {
        printf("\nQual sua idade? ");
        scanf("%d", &idade);
        if (idade <= 0) { break; }

        do {
            printf("Gostou do filme [S][N]? ");
            scanf(" %c", &gostou);
            gostou = toupper(gostou);
        } while (gostou != 'S' && gostou != 'N');

        do {
            printf("Recomenda o filme: [S][N]? ");
            scanf(" %c", &recomenda);
            recomenda = toupper(recomenda);
        } while (recomenda != 'S' && recomenda != 'N');

        if (gostou == 'S') { gostou_cont++; }
        if (recomenda == 'S') { recomenda_cont++; }

        i++;

    } while (idade > 0);

    printf("\nTotal de pessoas: %d\n", i);
    printf("Total de pessoas que gostaram: %d\n", gostou_cont);
    printf("Total de pessoas que recomendariam: %d\n", recomenda_cont);

    return 0;
}
