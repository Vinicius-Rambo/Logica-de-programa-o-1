#include <stdio.h>
int main(){
    int a[100][100], b[100][100], c[100][100];
    int m, n, i, j;

    printf("Digite o número de Linhas: ");
    scanf("%d", &m);

    printf("Digite o número de Colunas: ");
    scanf("%d", &n);

    printf("\nDigite os valores da matriz A: \n\n");
    for(i = 0; i < m; i++){ for(j = 0; j < n; j++){
        printf("Digite o valor da linha[%d] e coluna[%d]: ", i + 1, j + 1 );
        scanf("%d", &a[i][j]); }
        printf("\n");
    }    

    printf("Digite os valores da matriz B: \n\n");
    for(i = 0; i < m; i++){ for(j = 0; j < n; j++){
        printf("Digite o valor da linha[%d] e coluna[%d]: ", i + 1, j + 1 );
        scanf("%d", &b[i][j]);}
        printf("\n");       
    }

    for(i = 0; i < m; i++) for(j = 0; j < n; j++){
        c[i][j] = a[i][j] + b[i][j];
    }    

    printf("\nMatriz C (soma de A + B): \n");
    for(i = 0; i < m; i++){for(j = 0; j < n; j++){
        printf("[%d]\t", c[i][j]);}
    printf("\n");     
}

return 0; }
