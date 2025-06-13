#include <stdio.h>
#include <string.h>
int main(){
    char str1[20], str2[20];
    int i, resultado;

    printf("Digite a primeira String: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Digite a segunda String: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    resultado = strcmp (str1, str2);

    printf("\nstring1: %s\n", str1 );
    printf("string2: %s\n", str2 );
    
    if( resultado == 0){
        printf("Saida: as strings são iguais\n");
    }
     else{
        printf("Saida: as strings são diferentes\n"); 
    }

return 0; }     