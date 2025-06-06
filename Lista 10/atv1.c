#include <stdio.h>
int main(){
  int matriz[8][8], i, j;
  int maior, menor;


printf("  __  __       _        _       __  __       _                      __  __                          \n");
    printf(" |  \\/  | __ _| |_ _ __(_)____ |  \\/  | __ _(_) ___  _ __    ___   |  \\/  | ___ _ __   ___  _ __    \n");
    printf(" | |\\/| |/ _` | __| '__| |_  / | |\\/| |/ _` | |/ _ \\| '__|  / _ \\  | |\\/| |/ _ \\ '_ \\ / _ \\| '__|   \n");
    printf(" | |  | | (_| | |_| |  | |/ /  | |  | | (_| | | (_) | |    |  __/  | |  | |  __/ | | | (_) | |      \n");
    printf(" |_|  |_|\\__,_|\\__|_|  |_/___| |_|  |_|\\__,_|_|\\___/|_|     \\___|  |_|  |_|\\___|_| |_|\\___/|_|      \n");

  
  for(i = 0; i < 8 ; i++) for(j = 0; j < 8 ; j++){
      printf("Digite o valor da matriz [%d] [%d]:", i, j );
      scanf("%d", &matriz[i][j]);
  }

  maior = matriz[0][0];
  menor = matriz[0][0]; 

  for(i = 0; i < 8 ; i++) for(j = 0; j < 8 ; j++){
      if(matriz[i][j] > maior) {
        maior = matriz[i][j];
      }
    
      if(matriz[i][j] < menor) {
        menor = matriz[i][j];
      }
  }

  printf("\nmaior valor: %d\n", maior);
  for(i = 0; i < 8 ; i++) for(j = 0; j < 8 ; j++){
      if(matriz[i][j] == maior) {
        printf("\t\t linha:[%.2d]\n", i);
        printf("\t\t coluna:[%.2d]\n", j);   
      }    
  }

  printf("\nmenor valor: %d\n", menor);   
  for(i = 0; i < 8 ; i++) for(j = 0; j < 8 ; j++){
      if(matriz[i][j] == menor) {
        printf("\t\t linha:[%.2d]\n", i);
        printf("\t\t coluna:[%.2d]\n", j);   
      }    
  }

  return 0;
}
