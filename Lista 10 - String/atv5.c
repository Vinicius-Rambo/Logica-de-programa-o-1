#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
     char str1[20], str2[20];
     int i;

   printf("Digite a sua String: ");
   fgets(str1, sizeof(str1), stdin);
   str1[strcspn(str1, "\n")] = '\0';
   
for(i = 0; i < strlen(str1); i++){
    str2[i] = toupper(str1[i]);
}   

printf("\n- - - Resultados - - -\n");
printf("Seu texto era: %s\n", str1);
printf("Seu texto atual: %s\n", str2);

return 0;}