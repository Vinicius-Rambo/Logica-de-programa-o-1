#include <stdio.h>
int main(){
    int min, max, i;


        printf("- - - Contador do valor inicial até o final - - -\n");

        do{

        printf("Digite seu valor inicial: ");
         scanf("%d", &min);    
        printf("Digite seu valor final: ");
         scanf("%d", &max);

            if(min >= max){
                printf("Digite um valor inicial menor que o final\n\n");}
            }while (min >= max);
            
    i = min;
    do
    {
        printf("%d\n", i);
        i++;
    }while (i <= max);


    return 0;}
    




  


          