#include <stdio.h>
int main(){
    int a[100][100], t[100][100];
    int m, n, i, j;

    printf("Digite o número de Linhas: ");
    scanf("%d", &m);

    printf("Digite o número de Colunas: ");
    scanf("%d", &n); 
    
    printf("\nDigite os valores da matriz A: \n\n");
    for(i = 0; i < m; i++){ 
       for(j = 0; j < n; j++){
         printf("Digite o valor da linha[%d] e coluna[%d]: ", i + 1, j + 1 );
         scanf("%d", &a[i][j]); 
        }
     printf("\n");
    }
    
    for(i = 0; i < m; i++){ 
       for(j = 0; j < n; j++){
         t[j][i] = a[i][j]; 
        }
    } 
    
    printf("\nMatriz T: \n");
    for(i = 0; i < n; i++){  for(j = 0; j < m; j++){ // n linhas e m colunas agora para poder fazer a mudança.
        printf("[%d]\t", t[i][j]);  }

    printf("\n");     
}

return 0; }
