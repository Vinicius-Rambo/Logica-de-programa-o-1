#include <stdio.h>
int main(){
    int matriz[5][5], seletor, i, j;

    printf("\nDigite os valores da matriz: \n\n");
    for(i = 0; i < 5; i++){ for(j = 0; j < 5; j++){
         printf("Digite o valor da linha[%d] e coluna[%d]: ", i + 1, j + 1 );
         scanf("%d", &a[i][j]);     }
     printf("\n");
    }
    printf(" - - - Menu - - -");
    printf(" 1 - Mostrar todos os elementos da matriz                            \n");
    printf(" 2 - Mostrar todos os elementos da quarta linha e primeira coluna    \n");
    printf(" 3 - Mostrar a soma da diagonal principal                \n"); 
    printf(" 4 - Atribuir o valor 0 para os valores negativos encontrados fora da diagonal principal            \n");
    printf(" 5 - Pesquisar na matriz               \n");

        do{
            printf("Escolha uma opção de 1 a 5");
            scanf("%d", &seletor);
        }while(seletor < 1 || seletor > 5);    

    switch(seletor){

        case 1:
            for(i = 0; i < 5; i++ ){for

            }
        break;

        case 2:
        break;

        case 3:
        break;
        
        case 4:
        break;
        
        case 5:
        break;
    }    
}
