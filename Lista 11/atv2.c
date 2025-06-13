#include <stdio.h>
#include <string.h>
int main(){
    char str1[20], str2[20], str3[30];
    int i, tam[3];

    printf("- - - Concatenação de STRINGS (2ª na 1º)\n");
    printf("Digite a primeira String: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // remove o \n
    tam[0] = strlen(str1);

    printf("Digite a segunda String: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // remove o \n e substitui pelo \0 que finaliza o string
    tam[1] = strlen(str2);

    /*Concatenação com espaço entre as strings*/
    strcpy(str3, str1); // Copia a str 1 para 3
    strcat(str3, " "); //Concatena um espaço
    strcat(str3, str2);

    tam[2] = strlen(str3);

    printf("\n - - - Resultados - - -\n");
    printf("String 1: [%s]  String 2: [%s]\n", str1, str2);
    printf("String 3: [%s]\n", str3);

    printf("Tamanho das strings: (considera espaço) \n");
    for(i = 0; i < 3; i++ ){
        printf("String %d: [%d]\n", i + 1, tam[i]);
    }

    return 0;
}
