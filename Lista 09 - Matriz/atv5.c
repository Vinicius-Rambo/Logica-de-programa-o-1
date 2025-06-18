#include <stdio.h>
#define TAM 8
int main(){
    int matriz[TAM][TAM], seletor, i, j, soma, pesquisa;

    printf("Digite os valores da matriz: \n\n");
    for(i = 0; i < TAM; i++){ for(j = 0; j < TAM; j++){
         printf("Digite o valor da linha[%d] e coluna[%d]: ", i + 1, j + 1 );
         scanf("%d", &matriz[i][j]);     }
     printf("\n");
    }
    printf(" - - - Menu - - -\n");
    printf("[1] - Mostrar todos os elementos da matriz                            \n");
    printf("[2] - Mostrar todos os elementos da quarta linha e primeira coluna    \n");
    printf("[3] - Mostrar a soma da diagonal principal                \n"); 
    printf("[4] - Atribuir [0] para todo negativo encontrados fora da diagonal principal            \n");
    printf("[5] - Pesquisar na matriz               \n");
        do{
            printf("Escolha uma opção de 1 a 5: ");
            scanf("%d", &seletor);
        }while(seletor < 1 || seletor > 5);    

    switch(seletor){

        case 1:
            printf("\n");
            for(i = 0; i < TAM; i++ ){for(j = 0; j < TAM; j++){
              printf("[%.2d]\t", matriz[i][j]);  }
              printf("\n");  
            }
        break;

        case 2:
                printf("\nOs itens da Quarta linha são: \n");    
                for(j = 0; j < TAM; j++){
                    printf("[%d]\t", matriz[3][j]);
                }

                printf("\nOs itens da primeira coluna são: \n");
                for(i = 0; i < TAM; i++){
                    printf("[%d]\n", matriz[i][0]);
                }
        break;

        case 3:
            for(i = 0; i < TAM; i++ )for(j = 0; j < TAM; j++){
                if (i == j){
                        soma += matriz[i][j]; 
                }
            }    
            printf("A soma da diagonal principla é: %d", soma);            
        break;
        
        case 4:
            for(i = 0; i < TAM; i++ )for(j = 0; j < TAM; j++){
                if( i != j && matriz[i][j] < 0 ) {matriz[i][j] = 0; }
            }
            
            for(i = 0; i < TAM; i++ ){ 
                for(j = 0; j < TAM; j++){
                    printf("[%.2d]\t", matriz[i][j]);
                }
                printf("\n");
            }
        break;        
        case 5:
            printf("\nDigite seu valor a ser procurado: ");
            scanf("%d", &pesquisa);

            for(i = 0; i < TAM; i++ ){ 
                for(j = 0; j < TAM; j++){
                    if(pesquisa == matriz[i][j]){
                        printf("- - - Resultados - - -");
                        printf("Elemento localizado na linha [%d] e coluna [%d]", i + 1 , j + 1);
                        return 0;
                    }
                }    
            }
            
            printf("Elemento não encontrado!");
        break;
    }    
return 0; }
