#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
     char str1[20], letra;
     int i, qtd = 0;

   printf("Digite a sua String: ");
   fgets(str1, sizeof(str1), stdin);
   str1[strcspn(str1, "\n")] = '\0';
   
   printf("Digite a letra a ser procurada: ");
   scanf(" %c", &letra);

   for(i = 0; i < strlen(str1); i++){
    if(str1[i] == letra || str1[i] == toupper(letra)){
        qtd++;
    } }
 printf("\n - - - Resultados - - -\n");
 printf("String 1: [%s]\n", str1);
 printf("A sua letra selecionada foi: %c\n", letra);
 printf("Quantidade de letras: %d", qtd);

return 0;}

