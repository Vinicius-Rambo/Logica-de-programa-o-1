#include <stdio.h>

int main () {
  int num;
    
    printf("Qual é seu número?: ");
    scanf("%d",&num);
    
    if (num > 10 && num < 100 ){
        printf("intervalo permitido.");}
      
      else{
        printf("intervalo não está permitido.");} 
        
    
return 0;}
    