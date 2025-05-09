#include <stdio.h>
#include <ctype.h>
int main(){

char genero;    
int i=1, idade, maior_idade = 0, menor_idade, peso, maior_peso = 0, menor_peso;


do{

    printf("\nQuestionario das pessoas: %dº pessoa \n", i);

//questionario de genero e idade e peso, com looping.
    do{
        printf("\nQual seu genero?[H][M] ");
        scanf(" %c", &genero);
        genero = toupper(genero);
    } while (genero != 'H' && genero != 'M');

    do{
        printf("Qual sua idade? ");
        scanf(" %d", &idade);  
    } while ( idade >= 125 && idade <= 0);

    do{
        printf("Qual seu peso? ");
        scanf(" %d", &peso);  
    }while (peso >= 640 && peso <= 0);
//--------------------------------------------------------
//Criador de menor idade e maior idade
    if (i == 1) {
        maior_idade = idade;
        menor_idade = idade;
         }else {
            if (idade > maior_idade) maior_idade = idade;
            if (idade < menor_idade) menor_idade = idade;}
//-------------------------------------------------------------





} while ();
