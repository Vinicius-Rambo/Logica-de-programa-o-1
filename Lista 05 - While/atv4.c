<<<<<<< HEAD
#include <stdio.h>
int main(){   
    int i=0, soma_impar = 0, soma_par = 0, num;

    printf("Somador dos impares e pares\n");
    printf("Informe seu numero: \n");
    scanf("%d", &num);


    while (i <= num){
        if((i % 2) == 1 ){
            soma_impar = soma_impar + i;}

        else if((i % 2) == 0){
            soma_par = soma_par + i;}   
        i++;}

     printf("A soma dos impares é: %d\n", soma_impar);   
     printf("A soma dos pares é: %d\n", soma_par);

return 0;}
    
=======
#include <stdio.h>
int main(){   
    int i=0, soma_impar = 0, soma_par = 0, num;

    printf("Somador dos impares e pares\n");
    printf("Informe seu numero: \n");
    scanf("%d", &num);


    while (i <= num){
        if((i % 2) == 1 ){
            soma_impar = soma_impar + i;}

        else if((i % 2) == 0){
            soma_par = soma_par + i;}   
        i++;}

     printf("A soma dos impares é: %d\n", soma_impar);   
     printf("A soma dos pares é: %d\n", soma_par);

return 0;}
    
>>>>>>> 8501733c33033076e76e6b9a55eb286147fa830f
