#include <stdio.h>
#include <string.h>
int main(){
     char str1[20];
     int i, qtd = 0;

   printf("Digite a primeira String: ");
   fgets(str1, sizeof(str1), stdin);
   str1[strcspn(str1, "\n")] = '\0';
   
   for(i = 0; i < strlen(str1); i++){
    if(str1[i] == 'o' || str1[i] == 'O'){
        qtd++;
    } }
 printf("\n - - - Resultados - - -\n");
 printf("String 1: [%s]\n", str1);
 printf("Quantidade de letras: O %d", qtd);

 return 0;}   

