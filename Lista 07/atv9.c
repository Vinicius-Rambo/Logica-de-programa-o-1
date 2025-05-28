#include <stdio.h>
#include <ctype.h>
int main(){

    char genero, olhos, cabelos;
    int idade, menor_idade, cont_homens = 0, cont_mulheres = 0, i = 1;

    while (i <= 50){
        printf("\nQuestionario das pessoas: %dº pessoa \n", i);
        
        do{
            printf("\nQual seu genero?[H][M] ");
            scanf(" %c", &genero);
            genero = toupper(genero);
        } while (genero != 'H' && genero != 'M');

        do{
            printf("Qual sua idade? ");
            scanf(" %d", &idade);  
        } while (idade >= 125 || idade <= 0);
        
        printf("\nOlhos:\n"
            " A - Azuis                  \n"
            " V - Verdes                 \n"
            " P - Pretos                 \n"
            " C - Castanhos              \n");

        do {
            printf("\nDigite a letra correspondente aos olhos: ");
            scanf(" %c", &olhos);
            olhos = toupper(olhos);
        } while (olhos != 'A' && olhos != 'V' && olhos != 'P' && olhos != 'C');

        printf("\nCabelos:\n"
            " L - Louros                 \n"
            " C - Castanhos              \n"
            " P - Pretos                 \n");
     
        do {
            printf("\nDigite a letra correspondente aos cabelos: ");   
            scanf(" %c", &cabelos);
            cabelos = toupper(cabelos);
        } while (cabelos != 'L' && cabelos != 'C' && cabelos != 'P');

        if (i == 1) {
            menor_idade = idade;
        } else if (idade < menor_idade) {
            menor_idade = idade;
        }

        if (genero == 'H' && idade >= 16 && idade <= 24 && olhos == 'A' && cabelos =='C'){
            cont_homens++;
        }
        if (genero == 'M' && idade < 40 && olhos == 'P' && cabelos == 'P'){
            cont_mulheres++;
        }
        i++;
    }   

    printf("\nMenor idade do grupo: %d\n", menor_idade);
    printf("Homens entre 16 e 24 anos, olhos azuis, cabelos castanhos: %d\n", cont_homens);
    printf("Mulheres com menos de 40 anos, olhos pretos e cabelos pretos: %d\n", cont_mulheres);

    return 0;
}
