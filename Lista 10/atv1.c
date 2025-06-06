#include <stdio.h>
int main(){
  int matriz [8][8], i, j;
  int maior, menor;

  for(i = 0; i < 8 ; i++){for (j = 0; j < 8 ; j++){

    prinft("Digite o valor da matriz [%d] [%d]", i, j );
    scanf("%d", &matriz [i][j]);
  }
