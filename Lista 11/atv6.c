#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
     char str1[20], str2[20];
     int i, j;

   printf("Digite a sua String: ");
   fgets(str1, sizeof(str1), stdin);
   str1[strcspn(str1, "\n")] = '\0';
   
for(i = 0, j = strlen(str1) - 1; i < strlen(str1); i++, j--){
    str2[j] = str1[i];
    
}   

printf("\n- - - Resultados - - -\n");
printf("Seu String 1: %s\n", str1);
printf("Seu String 2: %s\n", str2);

return 0;}