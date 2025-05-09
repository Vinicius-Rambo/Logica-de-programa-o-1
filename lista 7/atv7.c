#include <stdio.h>
#include <ctype.h>

int main() {
    char escolha;
    int i=1, atletico = 0, coritiba = 0, foz = 0;
    float perc_atle, perc_cori, perc_foz;

do{
    printf("\n- - - Qual seu time do coração aqui do paraná?- - -\n");
    printf("A - Atlético\n");
    printf("C - Coritiba\n");
    printf("F - Foz\n");
    printf("S - Sair\n");

    printf("\n%dº pessoa a votar\n", i);
    printf("Escolha uma das opções: ");
    scanf(" %c", &escolha);
    escolha = toupper(escolha);

    if (escolha == 'A'){ atletico++; i++;}
    else if (escolha == 'C'){ coritiba++; i++;}
    else if (escolha == 'F'){ foz++; i++;}
    else if (escolha == 'S'){ i--;}
    else if (escolha != 'S'){
        printf("Resposta invalida tente novamente\n");}

    
} while (escolha != 'S');

    if(i > 1){

    perc_atle = (float)atletico / i *100;
    perc_cori = (float)coritiba / i *100;
    perc_foz = (float)foz / i *100;

    printf("\nTotal dos entrevistados: %d\n", i);    
    printf("A - atlético: %d - %.2f%%\n", atletico, perc_atle);
    printf("C - Coritiba: %d - %.2f%%\n", coritiba, perc_cori);
    printf("F - Foz:      %d - %.2f%%\n", foz, perc_foz); 
    }

        else{
            printf("Nenhum torcedor votou");
        }

 return 0;}       

