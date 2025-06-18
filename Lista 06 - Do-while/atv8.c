#include <stdio.h>
#include <ctype.h>
int main(){

    char genero, continuar;    
    int i = 1, idade, peso,
        mulher_velha = 0, homem_novo = 0, 
        maior_peso = 0, menor_peso = 0,
        cont_mulher = 0, cont_homem = 0;

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

    //contador de homeme mais novo e mulher mais velha.
          if(genero == 'M'){
            cont_mulher++;
            if(cont_mulher == 1){
                mulher_velha = idade;}

              else if(idade > mulher_velha){
                mulher_velha = idade;
              }}

        if(genero == 'H'){
            cont_homem++;
            if(cont_homem == 1){
                homem_novo = idade;}
                
              else if(idade < homem_novo){
                homem_novo = idade;
              }}

    //Menor e maior peso
        if(i == 1){
            maior_peso = peso;
            menor_peso = peso;
        }else
            if(peso > maior_peso){ maior_peso = peso; }
            if(peso < menor_peso){ menor_peso = peso; }

    //deseja continuar
        do {
            printf("\nDeseja continuar? [S/N] ");
            scanf(" %c", &continuar);
             continuar = toupper(continuar);  
                if (continuar != 'N' && continuar != 'S'){
                    printf("Resposta invalida!");}
                    
        } while (continuar != 'S' && continuar != 'N');

    i++;
     } while (continuar == 'S');
    
    //resultados
     
    printf("\nA mulher mais velha tem %d anos.\n", mulher_velha);
    printf("O homem mais novo tem %d anos.\n", homem_novo);
    printf("A pessoa com maior peso tem %d kg.\n", maior_peso);
    printf("A pessoa com menor peso tem %d kg.\n", menor_peso);

return 0;}    
