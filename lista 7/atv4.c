#include <stdio.h>

int main(){
    int idade, gostou_cont = 0, recomenda_cont = 0, i;
    char gostou, recomenda;

    printf("- - - Questionario sobre o filme - - - \n");
    printf("escreva '0' em idade para sair, qualquer valor que não seja 's' será considerado como não\n");
        do{
           printf("\nQual sua idade? ");
             scanf("%d", &idade);
             if (idade <= 0) {break;}

           printf("Gostou do filme [S][N]? ");
             scanf(" %c", &gostou);
           printf("Recomenda o filme: [S][N]? ");
             scanf(" %c", &recomenda);

           if (gostou == 's' || gostou == 'S' ){
            gostou_cont++; }

            if (recomenda == 's' || recomenda == 'S' ){
            recomenda_cont++; } 
          
            i++;    
        } while (idade > 0);

        printf("\nTotal de pessoas: %d\n", i );
        printf("Total de pessoas que gostaram: %d\n", gostou_cont );
        printf("Total de pessoas que recomendariam: %d", recomenda_cont);

return 0;}    
        