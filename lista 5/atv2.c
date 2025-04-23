#include <stdio.h>
#include <ctype.h>
int main () {
    int dia_semana;

    printf("Qual o número do seu dia? ");
    scanf("%d", &dia_semana);

 switch (dia_semana){
    case 1:
        printf("Seu dia é domingo.");
        break;
    
    case 2:
        printf("Seu dia é Segunda.");
        break;    
    case 3: 
        printf("Seu dia é Terça.");
        break;
    case 4: 
        printf("Seu dia é Quarta.");
        break;
    case 5:
        printf("Seu dia é Quinta.");
        break;

    case 6:
        printf("Seu dia é Sexta.");
        break;

    case 7:
        printf("Seu dia é Sabado.");
        break;        

    default:
        printf("Dia invalido.");}

 return 0;}       

        