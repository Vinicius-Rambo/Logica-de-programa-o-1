#include <stdio.h>
int main () {
    char estado;
    printf("Digite seu estado civil (S - Solteiro, C - Casado, D - Divorciado, V - Viúvo): ");
       scanf("%c", &estado);
    
    if (estado == 'S' || estado == 's') {
        printf("Você é solteiro(a).\n");}
    
     else if (estado == 'C' || estado == 'c') {
        printf("Você é casado(a).\n");}
    
     else if (estado == 'D' || estado == 'd') {
        printf("Você é Divorciado(a).\n");}

     else if (estado == 'V' || estado == 'v') {
            printf("Você é Viúvo(a).\n");}

       else
            printf("Por favor insira algo valido.");
return 0; 
}             