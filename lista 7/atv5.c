#include <stdio.h>
int main(){
    int num;

    do{
        printf("Entre com um numero entre 0 e 10: \n");
         scanf("%d", &num);

    }while (num <= 10 && num >= 0); 

    printf("Numero fora do intervalo!");

return 0;}    