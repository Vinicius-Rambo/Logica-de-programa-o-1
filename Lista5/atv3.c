#include <stdio.h>
int main () {
    int mes;

    printf("Qual o numero do seu mês? ");
    scanf("%d", &mes);

switch(mes){ 

    case 1:
    case 2:
    case 3: 
        printf("Este mês corresponde ao 1º trimestre. ");
        break;

    case 4:
    case 5:
    case 6: 
        printf("Este mês corresponde ao 2º trimestre. ");
        break;

    case 7:
    case 8:
    case 9: 
        printf("Este mês corresponde ao 3º trimestre. ");
        break;

    case 10:
    case 11:
    case 12: 
        printf("Este mês corresponde ao 4º trimestre. ");
        break;

    default: 
        printf("Este mês é invalido.");}
     return 0;}       
