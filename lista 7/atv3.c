#include <stdio.h>
#include <ctype.h>
int main(){

char genero;    
int i=1, idade, maior_I = 0, menor_I, cont_homens = 0, cont_mulher = 0, total_mulher = 0; 
float media = 0; 

//questionario de genero e idade, com looping.
while (i <= 10){
    printf("\nQuestionario das pessoas: %dº pessoa \n", i);

do{
    printf("\nQual seu genero?[H][M] ");
    scanf(" %c", &genero);
    genero = toupper(genero);
} while (genero != 'H' && genero != 'M');

do{
    printf("Qual sua idade? ");
    scanf(" %d", &idade);  
} while ( idade >= 125 && idade <= 0);


//Contador de homens e total de mulheres com suas idades
    if (genero == 'H'){cont_homens++;}

    else{
        total_mulher += idade;
        cont_mulher++;}

//Criador de menor idade e maior idade
    if (i == 1) {
        maior_I = idade;
        menor_I = idade;
    } else {
        if (idade > maior_I) maior_I = idade;
        if (idade < menor_I) menor_I = idade;
    }

    i++;}    

 media = (float) total_mulher/cont_mulher; 

 printf("\n A maior idade do grupo é: %d\n", maior_I);
 printf("A menor idade do grupo é: %d\n", menor_I);
 printf("A media da idade das mulheres é: %.2f\n",media);
 printf("A quantidade de homens é: %d\n", cont_homens);

return 0;}
