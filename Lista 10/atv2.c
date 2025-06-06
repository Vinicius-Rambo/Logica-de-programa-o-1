#include <stdio.h>
int main(){
 float matriz [3][3];    
 int i, j, conferir;

    for(i = 0; i < 3; i++){ for(j = 0; j < 3; j++){
      printf("Digite o valor da linha[%d] e coluna[%d]: ", i + 1, j + 1 );
      scanf("%f", &matriz[i][j]);}

      printf("\n");
    } 

    do{
        printf("Digite a linha que deseja conferir(1 a 3): ");
        scanf("%d", &conferir);
    }while(conferir < 1 || conferir > 3);
       
    switch (conferir){

        case 1:
          for(j = 0; j < 3; j++) {
          printf("Valores da linha 1: \n");
          printf("%.2f\n", matriz[0][j]); }
        break;  

        case 2:
          for(j = 0; j < 3; j++) {
          printf("Valores da linha 2: \n");
          printf("%.2f\n", matriz[1][j]); }
        break;
        
        case 3:
          for(j = 0; j < 3; j++) {
          printf("Valores da linha 3: \n");  
          printf("%.2f\n", matriz[2][j]); }
        break;
    }

return 0;}
