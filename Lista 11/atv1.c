#include <stdio.h>
#include <string.h>
int main(){
    char str1[6] = "lua", str2[6] = "cheia";

    printf("- - - Concatenação de STRINGS (2ª na 1º)\n");
    printf("Antes: \n");
    printf("String1: [%s]  String2: [%s]\n", str1, str2);

    strcat(str1, str2); // Concatena a string 1 com o conteudo da 2

    printf("\nDepois: \n ");
    printf("String 1: [%s]  String 2: [%s]\n", str1, str2);
return 0;}
