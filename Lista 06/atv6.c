#include <stdio.h>

int main() {

    int i=1, num, soma = 0, cont = 0;
    float media;

   while (i <= 15){
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);
            if(num > 10){
                soma = soma + num; /*Poderia ser soma += num (mas eu não gosto)*/
                cont++; }
        i++;
    }
    if(cont > 0 ){
        media = (float)soma / cont;
        printf("Media dos numeros maiores que 10: %.2f\n", media); }

       else{
        printf("Nehum número maior que 10 foi digitado.\n");}
        
     return 0;  }
    